#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args){
	//Базовые настройки для запуска формы
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//Запускаем указанную форму
	Project1::MyForm form;
	Application::Run(% form);
}

//Структура, удобная для 2D пространства
struct Vector2 {
	int X, Y;
};

Vector2 direction;//направление змейки
Vector2 positionFruit;//позиция фрукта
Vector2 gameArea;//Игровая зона

//конструктор формы
Project1::MyForm::MyForm(void) {
	InitializeComponent();

	//Задаем размеры игровой зоны
	gameArea.X = 400;
	gameArea.Y = 400;

	firstLaunch = true;//первый запуск
	NewGame();//новая игра
}

//Реализация действий игры
void Project1::MyForm::GeneratePositionFruit()
{
	//Генерируем случайную позицию фрукту
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(50, gameArea.X);//50 - смещение относительно боков формы
	positionFruit.Y = rand->Next(170, gameArea.Y);//170 - смещение верхней границы относительно вверха формы

	//Проверка, чтобы фрукт не создавался на змейке
	for (int i = 0; i < score; i++) {
		if (positionFruit.X == Serpens[i]->Location.X &&
			positionFruit.Y == Serpens[i]->Location.Y)
			GeneratePositionFruit();
	}
	
	//Преобразуем значение, чтобы было кратно шагу
	int tempX = positionFruit.X % step;
	positionFruit.X -= tempX;

	int tempY = positionFruit.Y % step;
	positionFruit.Y -= tempY;

	//Присваимваем позиции фрукту
	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	//Добавляем объект на форму
	this->Controls->Add(fruit);

}

void Project1::MyForm::Eating()
{
	if (Serpens[0]->Location.X == positionFruit.X && Serpens[0]->Location.Y == positionFruit.Y) {
		labelScore->Text = "Счёт: " + ++score;

		//Добавляем новый лемент змейке
		Serpens[score] = gcnew PictureBox();
		Serpens[score]->Location = Point(Serpens[score - 1]->Location.X + step * direction.X, Serpens[score - 1]->Location.Y - step * direction.Y);
		Serpens[score]->BackColor = Color::Red;
		Serpens[score]->Width = step;
		Serpens[score]->Height = step;
		this->Controls->Add(Serpens[score]);

		GeneratePositionFruit();
	}
}

void Project1::MyForm::Movement()
{
	for (int i = score; i >= 1; i--) {
		Serpens[i]->Location = Serpens[i - 1]->Location;
	}
	Serpens[0]->Location = Point(Serpens[0]->Location.X + direction.X * step, Serpens[0]->Location.Y + direction.Y * step);
}

void Project1::MyForm::EatYourself()
{
	//Проверяем позиции каждой части змейки
	for (int i = 1; i < score; i++) {
		if (Serpens[0]->Location == Serpens[i]->Location) {
			GameOver();
		}
	}
}

void Project1::MyForm::GameOver()
{
	play = true;
	die = true;

	labelGameOver->Visible = true;
}

void Project1::MyForm::NewGame()
{
	//Если инициализация была, то удаляем объекты с формы
	if (!firstLaunch) {
		this->Controls->Remove(fruit);

		for (int i = 0; i <= score; i++) {
			this->Controls->Remove(Serpens[i]);
		}

		score = 0;
	}
	else
		firstLaunch = false;

	//Инициализируем змейку
	Serpens = gcnew array <PictureBox^, 1>(400);
	Serpens[0] = gcnew PictureBox();
	Serpens[0]->Location = Point(200, 200);
	Serpens[0]->BackColor = Color::Black;//Голова будет зеленой, чтобы отличалась от всех
	Serpens[0]->Width = step;
	Serpens[0]->Height = step;

	score = 0;
	this->Controls->Add(Serpens[0]);

	//Инициализируем фрукт
	fruit = gcnew PictureBox();
	fruit->BackColor = Color::Green;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	//Задаем интервал обновления и запускаем таймер для обновления
	timer->Interval = updateInterval;
	timer->Start();

	//Задаем направление на запуске
	direction.X = 1;
	direction.Y = 0;

	//Можно играть
	play = true;
	die = false;

	labelScore->Text = "Счёт: 0";

	//Скрываем не нужные компоненты на форме
	labelGameOver->Visible = false;
	groupBoxSettings->Visible = false;
}

void Project1::MyForm::ChackBorders()
{
	if (Serpens[0]->Location.X >= RightBorder->Location.X || Serpens[0] -> Location.X <= LeftBorder->Location.X) {

		GameOver();
	}
	if (Serpens[0]->Location.Y <= UpperBorder->Location.Y || Serpens[0] -> Location.Y >= LowerBorder->Location.Y) {

		GameOver();
	}
}

//Реализация событий
System::Void Project1::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Project1::MyForm::информацияОИгреToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Правила игры:\n1.Для управления использовать стрелки\n2.Собирайте фрукты для набора счета и увеличения змейки\n3.Нельзя есть себя и врезаться в стенку");

	return System::Void();
}

System::Void Project1::MyForm::менюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Project1::MyForm::новаяИграToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewGame();

	return System::Void();
}

System::Void Project1::MyForm::паузаПродолжитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (play) {
		play = false;
	}
	else {
		play = true;
		timer->Start();
	}

	return System::Void();
}

System::Void Project1::MyForm::настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxSettings->Visible == false) {
		//Приостанавливаем игру
		play = false;

		buttonApplySpeed->Enabled = true;
		numericUpDownSpeedSnake->Enabled = true;
		groupBoxSettings->Visible = true;
	}
	else {
		//Запускаем игру
		play = true;
		timer->Start();

		buttonApplySpeed->Enabled = false;
		numericUpDownSpeedSnake->Enabled = false;
		groupBoxSettings->Visible = false;
	}
}

System::Void Project1::MyForm::buttonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e)
{
	updateInterval = Convert::ToSingle(numericUpDownSpeedSnake->Value);
	timer->Interval = updateInterval;

	buttonApplySpeed->Enabled = false;
	numericUpDownSpeedSnake->Enabled = false;
	groupBoxSettings->Visible = false;

	//Запускаем игру
	play = true;
	timer->Start();

	return System::Void();
}

System::Void Project1::MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	//Считываем нажатую клавишу
	if (e->KeyCode.ToString() == "Right") {
		direction.X = 1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "Left") {
		direction.X = -1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "Up") {
		direction.Y = -1;
		direction.X = 0;
	}
	else if (e->KeyCode.ToString() == "Down") {
		direction.Y = 1;
		direction.X = 0;
	}

	return System::Void();
}

void Project1::MyForm::GameForm_Update(Object^ obgect, EventArgs^ e)
{
	if (!die && play) {
		//Задает движение змейки
		Movement();

		Eating();//Проверка, что съели фрукт
		EatYourself();//Проверка на столкновение с стенкой
	}
	else if (die && play) {
		timer->Stop();
		MessageBox::Show("Игра окончена!");
	}
	else if (!play && !die) {
		timer->Stop();
		MessageBox::Show("игры приостановлена!");
	}
}

