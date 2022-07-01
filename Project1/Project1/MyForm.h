#pragma once
#include <tuple>
#include <iostream>
#include <istream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	bool flag = false;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			void save(String ^ word);
			MaximizeBox = false;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;


			//
			//TODO: добавьте код конструктора
			//
		}
		void saveShooter(String^ word)
		{
			StreamWriter^ File = gcnew StreamWriter("shooter.txt");
			File->Write(word);
			File->Close();
		}

		void saveFighting(String^ word)
		{
			StreamWriter^ File = gcnew StreamWriter("fighting.txt");
			File->Write(word);
			File->Close();
		}

		void savePlatformer(String^ word)
		{
			StreamWriter^ File = gcnew StreamWriter("platformer.txt");
			File->Write(word);
			File->Close();
		}

		void saveSurvival(String^ word)
		{
			StreamWriter^ File = gcnew StreamWriter("survival.txt");
			File->Write(word);
			File->Close();
		}

		void saveAllGames(String^ word)
		{
			StreamWriter^ File = gcnew StreamWriter("allgames.txt");
			File->Write(word);
			File->Close();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonSaveShooter;
	protected:
	protected:

	protected:

	protected:

	private: System::Windows::Forms::RichTextBox^ richTextBox;
	private: System::Windows::Forms::Button^ buttonAllGames;


	private: System::Windows::Forms::PictureBox^ pictureFont;
	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::Button^ buttonAddInfo;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::TextBox^ textBoxSearch;
	private: System::Windows::Forms::Label^ labelShooter;



	private: System::Windows::Forms::PictureBox^ pictureBoxUp;

	private: System::Windows::Forms::Label^ labelChoose;
	private: System::Windows::Forms::PictureBox^ pictureFontAuth;
	private: System::Windows::Forms::Label^ labelAuth;




	private: System::Windows::Forms::TextBox^ textLogin;
	private: System::Windows::Forms::Label^ labelLogin;


	private: System::Windows::Forms::TextBox^ textPassword;
	private: System::Windows::Forms::Label^ labelPassword;


	private: System::Windows::Forms::Button^ buttonEnterAuth;
	private: System::Windows::Forms::Label^ labelAdminPanel;
	private: System::Windows::Forms::PictureBox^ pictureFontAdmin;
	private: System::Windows::Forms::PictureBox^ pictureUpAdmin;
	private: System::Windows::Forms::Button^ buttonAdmin;
	private: System::Windows::Forms::Button^ buttonBackAdmin;
	private: System::Windows::Forms::PictureBox^ pictureAllGames;
	private: System::Windows::Forms::PictureBox^ pictureFontAllGames;
	private: System::Windows::Forms::Button^ buttonPlatformer;
	private: System::Windows::Forms::PictureBox^ picturePlatformer;
	private: System::Windows::Forms::Button^ buttonSurvival;
	private: System::Windows::Forms::PictureBox^ pictureFontPlatformer;

	private: System::Windows::Forms::PictureBox^ pictureSurvival;
	private: System::Windows::Forms::PictureBox^ pictureFontSurvival;


	private: System::Windows::Forms::Button^ buttonFighting;
	private: System::Windows::Forms::Button^ buttonShooter;

	private: System::Windows::Forms::PictureBox^ pictureFontFighting;
	private: System::Windows::Forms::PictureBox^ pictureFighting;
	private: System::Windows::Forms::PictureBox^ pictureFontShooter;

	private: System::Windows::Forms::PictureBox^ pictureShooter;
	private: System::Windows::Forms::Label^ labelFighting;
	private: System::Windows::Forms::Label^ labelPlatformer;
	private: System::Windows::Forms::Label^ labelSurvival;
	private: System::Windows::Forms::PictureBox^ pictureUpAuth;
	private: System::Windows::Forms::PictureBox^ pictureAdmin;
	private: System::Windows::Forms::Button^ buttonAdminShooter;
	private: System::Windows::Forms::Button^ buttonAdminFighting;
	private: System::Windows::Forms::Button^ buttonAdminPlatformer;
	private: System::Windows::Forms::Button^ buttonAdminSurvival;
	private: System::Windows::Forms::Button^ buttonAdminAllGames;
	private: System::Windows::Forms::Button^ buttonBackAdminPanel;
	private: System::Windows::Forms::Button^ buttonSaveFighting;
private: System::Windows::Forms::Button^ buttonSavePlatformer;
private: System::Windows::Forms::Button^ buttonSaveSurvival;
private: System::Windows::Forms::Button^ buttonSaveAllGames;
private: System::Windows::Forms::Label^ labelAllGames;
private: System::Windows::Forms::Button^ buttonExitAdmin;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttonSaveShooter = (gcnew System::Windows::Forms::Button());
			this->richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonAllGames = (gcnew System::Windows::Forms::Button());
			this->pictureFont = (gcnew System::Windows::Forms::PictureBox());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->buttonAddInfo = (gcnew System::Windows::Forms::Button());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->labelShooter = (gcnew System::Windows::Forms::Label());
			this->pictureBoxUp = (gcnew System::Windows::Forms::PictureBox());
			this->labelChoose = (gcnew System::Windows::Forms::Label());
			this->pictureFontAuth = (gcnew System::Windows::Forms::PictureBox());
			this->labelAuth = (gcnew System::Windows::Forms::Label());
			this->textLogin = (gcnew System::Windows::Forms::TextBox());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->textPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->buttonEnterAuth = (gcnew System::Windows::Forms::Button());
			this->labelAdminPanel = (gcnew System::Windows::Forms::Label());
			this->pictureFontAdmin = (gcnew System::Windows::Forms::PictureBox());
			this->pictureUpAdmin = (gcnew System::Windows::Forms::PictureBox());
			this->buttonAdmin = (gcnew System::Windows::Forms::Button());
			this->buttonBackAdmin = (gcnew System::Windows::Forms::Button());
			this->pictureAllGames = (gcnew System::Windows::Forms::PictureBox());
			this->pictureFontAllGames = (gcnew System::Windows::Forms::PictureBox());
			this->buttonPlatformer = (gcnew System::Windows::Forms::Button());
			this->picturePlatformer = (gcnew System::Windows::Forms::PictureBox());
			this->buttonSurvival = (gcnew System::Windows::Forms::Button());
			this->pictureFontPlatformer = (gcnew System::Windows::Forms::PictureBox());
			this->pictureSurvival = (gcnew System::Windows::Forms::PictureBox());
			this->pictureFontSurvival = (gcnew System::Windows::Forms::PictureBox());
			this->buttonFighting = (gcnew System::Windows::Forms::Button());
			this->buttonShooter = (gcnew System::Windows::Forms::Button());
			this->pictureFontFighting = (gcnew System::Windows::Forms::PictureBox());
			this->pictureFighting = (gcnew System::Windows::Forms::PictureBox());
			this->pictureFontShooter = (gcnew System::Windows::Forms::PictureBox());
			this->pictureShooter = (gcnew System::Windows::Forms::PictureBox());
			this->labelFighting = (gcnew System::Windows::Forms::Label());
			this->labelPlatformer = (gcnew System::Windows::Forms::Label());
			this->labelSurvival = (gcnew System::Windows::Forms::Label());
			this->pictureUpAuth = (gcnew System::Windows::Forms::PictureBox());
			this->pictureAdmin = (gcnew System::Windows::Forms::PictureBox());
			this->buttonAdminShooter = (gcnew System::Windows::Forms::Button());
			this->buttonAdminFighting = (gcnew System::Windows::Forms::Button());
			this->buttonAdminPlatformer = (gcnew System::Windows::Forms::Button());
			this->buttonAdminSurvival = (gcnew System::Windows::Forms::Button());
			this->buttonAdminAllGames = (gcnew System::Windows::Forms::Button());
			this->buttonBackAdminPanel = (gcnew System::Windows::Forms::Button());
			this->buttonSaveFighting = (gcnew System::Windows::Forms::Button());
			this->buttonSavePlatformer = (gcnew System::Windows::Forms::Button());
			this->buttonSaveSurvival = (gcnew System::Windows::Forms::Button());
			this->buttonSaveAllGames = (gcnew System::Windows::Forms::Button());
			this->labelAllGames = (gcnew System::Windows::Forms::Label());
			this->buttonExitAdmin = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFont))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontAuth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontAdmin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUpAdmin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAllGames))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontAllGames))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePlatformer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontPlatformer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureSurvival))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontSurvival))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontFighting))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFighting))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontShooter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureShooter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUpAuth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAdmin))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonSaveShooter
			// 
			this->buttonSaveShooter->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSaveShooter->Cursor = System::Windows::Forms::Cursors::Default;
			this->buttonSaveShooter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveShooter->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSaveShooter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSaveShooter.Image")));
			this->buttonSaveShooter->Location = System::Drawing::Point(380, 380);
			this->buttonSaveShooter->Name = L"buttonSaveShooter";
			this->buttonSaveShooter->Size = System::Drawing::Size(43, 37);
			this->buttonSaveShooter->TabIndex = 0;
			this->buttonSaveShooter->UseVisualStyleBackColor = false;
			this->buttonSaveShooter->Visible = false;
			this->buttonSaveShooter->Click += gcnew System::EventHandler(this, &MyForm::buttonSave_Click);
			// 
			// richTextBox
			// 
			this->richTextBox->Location = System::Drawing::Point(167, 120);
			this->richTextBox->Name = L"richTextBox";
			this->richTextBox->Size = System::Drawing::Size(417, 246);
			this->richTextBox->TabIndex = 1;
			this->richTextBox->Text = L"";
			this->richTextBox->Visible = false;
			// 
			// buttonAllGames
			// 
			this->buttonAllGames->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonAllGames->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAllGames->Location = System::Drawing::Point(184, 307);
			this->buttonAllGames->Name = L"buttonAllGames";
			this->buttonAllGames->Size = System::Drawing::Size(388, 23);
			this->buttonAllGames->TabIndex = 2;
			this->buttonAllGames->Text = L"All games";
			this->buttonAllGames->UseVisualStyleBackColor = false;
			this->buttonAllGames->Click += gcnew System::EventHandler(this, &MyForm::buttonAllGames_Click);
			// 
			// pictureFont
			// 
			this->pictureFont->BackColor = System::Drawing::Color::Black;
			this->pictureFont->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureFont->Location = System::Drawing::Point(146, 51);
			this->pictureFont->Name = L"pictureFont";
			this->pictureFont->Size = System::Drawing::Size(462, 385);
			this->pictureFont->TabIndex = 3;
			this->pictureFont->TabStop = false;
			this->pictureFont->Click += gcnew System::EventHandler(this, &MyForm::pictureFont_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->BackColor = System::Drawing::SystemColors::ControlDark;
			this->buttonBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonBack.BackgroundImage")));
			this->buttonBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBack->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->buttonBack->Location = System::Drawing::Point(575, 54);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(26, 26);
			this->buttonBack->TabIndex = 4;
			this->buttonBack->UseVisualStyleBackColor = false;
			this->buttonBack->Visible = false;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm::buttonBack_Click);
			// 
			// buttonAddInfo
			// 
			this->buttonAddInfo->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonAddInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddInfo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonAddInfo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonAddInfo.Image")));
			this->buttonAddInfo->Location = System::Drawing::Point(323, 381);
			this->buttonAddInfo->Name = L"buttonAddInfo";
			this->buttonAddInfo->Size = System::Drawing::Size(45, 36);
			this->buttonAddInfo->TabIndex = 5;
			this->buttonAddInfo->UseVisualStyleBackColor = false;
			this->buttonAddInfo->Visible = false;
			this->buttonAddInfo->Click += gcnew System::EventHandler(this, &MyForm::buttonAddInfo_Click);
			// 
			// buttonSearch
			// 
			this->buttonSearch->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSearch->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonSearch->Location = System::Drawing::Point(167, 93);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(75, 23);
			this->buttonSearch->TabIndex = 6;
			this->buttonSearch->Text = L"Search";
			this->buttonSearch->UseVisualStyleBackColor = false;
			this->buttonSearch->Visible = false;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MyForm::buttonSearch_Click_1);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBoxSearch->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBoxSearch->Location = System::Drawing::Point(248, 95);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(336, 20);
			this->textBoxSearch->TabIndex = 7;
			this->textBoxSearch->Visible = false;
			// 
			// labelShooter
			// 
			this->labelShooter->AutoSize = true;
			this->labelShooter->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelShooter->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelShooter->Location = System::Drawing::Point(331, 57);
			this->labelShooter->Name = L"labelShooter";
			this->labelShooter->Size = System::Drawing::Size(78, 21);
			this->labelShooter->TabIndex = 9;
			this->labelShooter->Text = L"Shooter";
			this->labelShooter->Visible = false;
			// 
			// pictureBoxUp
			// 
			this->pictureBoxUp->BackColor = System::Drawing::SystemColors::ControlDark;
			this->pictureBoxUp->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxUp->Location = System::Drawing::Point(146, 51);
			this->pictureBoxUp->Name = L"pictureBoxUp";
			this->pictureBoxUp->Size = System::Drawing::Size(462, 33);
			this->pictureBoxUp->TabIndex = 8;
			this->pictureBoxUp->TabStop = false;
			// 
			// labelChoose
			// 
			this->labelChoose->AutoSize = true;
			this->labelChoose->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelChoose->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChoose->Location = System::Drawing::Point(292, 57);
			this->labelChoose->Name = L"labelChoose";
			this->labelChoose->Size = System::Drawing::Size(170, 21);
			this->labelChoose->TabIndex = 11;
			this->labelChoose->Text = L"Choose a category";
			// 
			// pictureFontAuth
			// 
			this->pictureFontAuth->BackColor = System::Drawing::Color::Black;
			this->pictureFontAuth->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureFontAuth->Location = System::Drawing::Point(192, 86);
			this->pictureFontAuth->Name = L"pictureFontAuth";
			this->pictureFontAuth->Size = System::Drawing::Size(389, 292);
			this->pictureFontAuth->TabIndex = 12;
			this->pictureFontAuth->TabStop = false;
			this->pictureFontAuth->Visible = false;
			// 
			// labelAuth
			// 
			this->labelAuth->AutoSize = true;
			this->labelAuth->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAuth->Location = System::Drawing::Point(345, 92);
			this->labelAuth->Name = L"labelAuth";
			this->labelAuth->Size = System::Drawing::Size(98, 16);
			this->labelAuth->TabIndex = 13;
			this->labelAuth->Text = L"Autorization";
			this->labelAuth->Visible = false;
			// 
			// textLogin
			// 
			this->textLogin->Location = System::Drawing::Point(347, 190);
			this->textLogin->Name = L"textLogin";
			this->textLogin->Size = System::Drawing::Size(136, 20);
			this->textLogin->TabIndex = 15;
			this->textLogin->Visible = false;
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLogin->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->labelLogin->Location = System::Drawing::Point(283, 192);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(46, 16);
			this->labelLogin->TabIndex = 16;
			this->labelLogin->Text = L"Login";
			this->labelLogin->Visible = false;
			// 
			// textPassword
			// 
			this->textPassword->Location = System::Drawing::Point(347, 228);
			this->textPassword->Name = L"textPassword";
			this->textPassword->Size = System::Drawing::Size(136, 20);
			this->textPassword->TabIndex = 17;
			this->textPassword->Visible = false;
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPassword->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->labelPassword->Location = System::Drawing::Point(257, 229);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(77, 16);
			this->labelPassword->TabIndex = 18;
			this->labelPassword->Text = L"Password";
			this->labelPassword->Visible = false;
			// 
			// buttonEnterAuth
			// 
			this->buttonEnterAuth->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonEnterAuth->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonEnterAuth->Location = System::Drawing::Point(348, 269);
			this->buttonEnterAuth->Name = L"buttonEnterAuth";
			this->buttonEnterAuth->Size = System::Drawing::Size(75, 23);
			this->buttonEnterAuth->TabIndex = 19;
			this->buttonEnterAuth->Text = L"Enter";
			this->buttonEnterAuth->UseVisualStyleBackColor = false;
			this->buttonEnterAuth->Visible = false;
			this->buttonEnterAuth->Click += gcnew System::EventHandler(this, &MyForm::buttonEnterAuth_Click);
			// 
			// labelAdminPanel
			// 
			this->labelAdminPanel->AutoSize = true;
			this->labelAdminPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelAdminPanel->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelAdminPanel->Location = System::Drawing::Point(326, 97);
			this->labelAdminPanel->Name = L"labelAdminPanel";
			this->labelAdminPanel->Size = System::Drawing::Size(112, 21);
			this->labelAdminPanel->TabIndex = 20;
			this->labelAdminPanel->Text = L"Admin panel";
			this->labelAdminPanel->Visible = false;
			// 
			// pictureFontAdmin
			// 
			this->pictureFontAdmin->BackColor = System::Drawing::Color::Black;
			this->pictureFontAdmin->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureFontAdmin->Location = System::Drawing::Point(146, 123);
			this->pictureFontAdmin->Name = L"pictureFontAdmin";
			this->pictureFontAdmin->Size = System::Drawing::Size(462, 228);
			this->pictureFontAdmin->TabIndex = 21;
			this->pictureFontAdmin->TabStop = false;
			this->pictureFontAdmin->Visible = false;
			this->pictureFontAdmin->Click += gcnew System::EventHandler(this, &MyForm::pictureFontAdmin_Click);
			// 
			// pictureUpAdmin
			// 
			this->pictureUpAdmin->BackColor = System::Drawing::SystemColors::ControlDark;
			this->pictureUpAdmin->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureUpAdmin->Location = System::Drawing::Point(146, 92);
			this->pictureUpAdmin->Name = L"pictureUpAdmin";
			this->pictureUpAdmin->Size = System::Drawing::Size(462, 33);
			this->pictureUpAdmin->TabIndex = 22;
			this->pictureUpAdmin->TabStop = false;
			this->pictureUpAdmin->Visible = false;
			// 
			// buttonAdmin
			// 
			this->buttonAdmin->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonAdmin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAdmin->Location = System::Drawing::Point(344, 405);
			this->buttonAdmin->Name = L"buttonAdmin";
			this->buttonAdmin->Size = System::Drawing::Size(75, 23);
			this->buttonAdmin->TabIndex = 23;
			this->buttonAdmin->Text = L"Admin panel";
			this->buttonAdmin->UseVisualStyleBackColor = false;
			this->buttonAdmin->Click += gcnew System::EventHandler(this, &MyForm::buttonAdmin_Click);
			// 
			// buttonBackAdmin
			// 
			this->buttonBackAdmin->BackColor = System::Drawing::SystemColors::ControlDark;
			this->buttonBackAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonBackAdmin.BackgroundImage")));
			this->buttonBackAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonBackAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonBackAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBackAdmin->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->buttonBackAdmin->Location = System::Drawing::Point(550, 87);
			this->buttonBackAdmin->Name = L"buttonBackAdmin";
			this->buttonBackAdmin->Size = System::Drawing::Size(26, 26);
			this->buttonBackAdmin->TabIndex = 24;
			this->buttonBackAdmin->UseVisualStyleBackColor = false;
			this->buttonBackAdmin->Visible = false;
			this->buttonBackAdmin->Click += gcnew System::EventHandler(this, &MyForm::buttonBackAdmin_Click);
			// 
			// pictureAllGames
			// 
			this->pictureAllGames->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureAllGames->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureAllGames.Image")));
			this->pictureAllGames->Location = System::Drawing::Point(186, 335);
			this->pictureAllGames->Name = L"pictureAllGames";
			this->pictureAllGames->Size = System::Drawing::Size(384, 65);
			this->pictureAllGames->TabIndex = 25;
			this->pictureAllGames->TabStop = false;
			// 
			// pictureFontAllGames
			// 
			this->pictureFontAllGames->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureFontAllGames->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureFontAllGames->Location = System::Drawing::Point(183, 332);
			this->pictureFontAllGames->Name = L"pictureFontAllGames";
			this->pictureFontAllGames->Size = System::Drawing::Size(389, 70);
			this->pictureFontAllGames->TabIndex = 26;
			this->pictureFontAllGames->TabStop = false;
			// 
			// buttonPlatformer
			// 
			this->buttonPlatformer->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonPlatformer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonPlatformer->Location = System::Drawing::Point(387, 92);
			this->buttonPlatformer->Name = L"buttonPlatformer";
			this->buttonPlatformer->Size = System::Drawing::Size(75, 23);
			this->buttonPlatformer->TabIndex = 27;
			this->buttonPlatformer->Text = L"Platformer";
			this->buttonPlatformer->UseVisualStyleBackColor = false;
			this->buttonPlatformer->Click += gcnew System::EventHandler(this, &MyForm::buttonPlatformer_Click);
			// 
			// picturePlatformer
			// 
			this->picturePlatformer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picturePlatformer.Image")));
			this->picturePlatformer->Location = System::Drawing::Point(389, 123);
			this->picturePlatformer->Name = L"picturePlatformer";
			this->picturePlatformer->Size = System::Drawing::Size(73, 169);
			this->picturePlatformer->TabIndex = 28;
			this->picturePlatformer->TabStop = false;
			// 
			// buttonSurvival
			// 
			this->buttonSurvival->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSurvival->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonSurvival->Location = System::Drawing::Point(494, 92);
			this->buttonSurvival->Name = L"buttonSurvival";
			this->buttonSurvival->Size = System::Drawing::Size(75, 23);
			this->buttonSurvival->TabIndex = 29;
			this->buttonSurvival->Text = L"Survival";
			this->buttonSurvival->UseVisualStyleBackColor = false;
			this->buttonSurvival->Click += gcnew System::EventHandler(this, &MyForm::buttonSurvival_Click);
			// 
			// pictureFontPlatformer
			// 
			this->pictureFontPlatformer->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureFontPlatformer->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureFontPlatformer->Location = System::Drawing::Point(387, 120);
			this->pictureFontPlatformer->Name = L"pictureFontPlatformer";
			this->pictureFontPlatformer->Size = System::Drawing::Size(76, 175);
			this->pictureFontPlatformer->TabIndex = 30;
			this->pictureFontPlatformer->TabStop = false;
			// 
			// pictureSurvival
			// 
			this->pictureSurvival->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureSurvival.Image")));
			this->pictureSurvival->Location = System::Drawing::Point(495, 124);
			this->pictureSurvival->Name = L"pictureSurvival";
			this->pictureSurvival->Size = System::Drawing::Size(73, 169);
			this->pictureSurvival->TabIndex = 31;
			this->pictureSurvival->TabStop = false;
			// 
			// pictureFontSurvival
			// 
			this->pictureFontSurvival->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureFontSurvival->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureFontSurvival->Location = System::Drawing::Point(494, 121);
			this->pictureFontSurvival->Name = L"pictureFontSurvival";
			this->pictureFontSurvival->Size = System::Drawing::Size(76, 175);
			this->pictureFontSurvival->TabIndex = 32;
			this->pictureFontSurvival->TabStop = false;
			// 
			// buttonFighting
			// 
			this->buttonFighting->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonFighting->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonFighting->Location = System::Drawing::Point(284, 92);
			this->buttonFighting->Name = L"buttonFighting";
			this->buttonFighting->Size = System::Drawing::Size(75, 23);
			this->buttonFighting->TabIndex = 33;
			this->buttonFighting->Text = L"Fighting";
			this->buttonFighting->UseVisualStyleBackColor = false;
			this->buttonFighting->Click += gcnew System::EventHandler(this, &MyForm::buttonFighting_Click);
			// 
			// buttonShooter
			// 
			this->buttonShooter->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonShooter->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonShooter->Location = System::Drawing::Point(183, 92);
			this->buttonShooter->Name = L"buttonShooter";
			this->buttonShooter->Size = System::Drawing::Size(75, 23);
			this->buttonShooter->TabIndex = 34;
			this->buttonShooter->Text = L"Shooter";
			this->buttonShooter->UseVisualStyleBackColor = false;
			this->buttonShooter->Click += gcnew System::EventHandler(this, &MyForm::buttonShooter_Click);
			// 
			// pictureFontFighting
			// 
			this->pictureFontFighting->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureFontFighting->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureFontFighting->Location = System::Drawing::Point(284, 121);
			this->pictureFontFighting->Name = L"pictureFontFighting";
			this->pictureFontFighting->Size = System::Drawing::Size(76, 175);
			this->pictureFontFighting->TabIndex = 35;
			this->pictureFontFighting->TabStop = false;
			// 
			// pictureFighting
			// 
			this->pictureFighting->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureFighting.Image")));
			this->pictureFighting->Location = System::Drawing::Point(286, 124);
			this->pictureFighting->Name = L"pictureFighting";
			this->pictureFighting->Size = System::Drawing::Size(73, 169);
			this->pictureFighting->TabIndex = 36;
			this->pictureFighting->TabStop = false;
			// 
			// pictureFontShooter
			// 
			this->pictureFontShooter->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureFontShooter->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureFontShooter->Location = System::Drawing::Point(183, 122);
			this->pictureFontShooter->Name = L"pictureFontShooter";
			this->pictureFontShooter->Size = System::Drawing::Size(76, 175);
			this->pictureFontShooter->TabIndex = 37;
			this->pictureFontShooter->TabStop = false;
			// 
			// pictureShooter
			// 
			this->pictureShooter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureShooter.Image")));
			this->pictureShooter->Location = System::Drawing::Point(185, 125);
			this->pictureShooter->Name = L"pictureShooter";
			this->pictureShooter->Size = System::Drawing::Size(73, 169);
			this->pictureShooter->TabIndex = 38;
			this->pictureShooter->TabStop = false;
			// 
			// labelFighting
			// 
			this->labelFighting->AutoSize = true;
			this->labelFighting->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelFighting->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelFighting->Location = System::Drawing::Point(343, 57);
			this->labelFighting->Name = L"labelFighting";
			this->labelFighting->Size = System::Drawing::Size(76, 21);
			this->labelFighting->TabIndex = 39;
			this->labelFighting->Text = L"Fighting";
			this->labelFighting->Visible = false;
			// 
			// labelPlatformer
			// 
			this->labelPlatformer->AutoSize = true;
			this->labelPlatformer->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelPlatformer->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelPlatformer->Location = System::Drawing::Point(328, 57);
			this->labelPlatformer->Name = L"labelPlatformer";
			this->labelPlatformer->Size = System::Drawing::Size(99, 21);
			this->labelPlatformer->TabIndex = 40;
			this->labelPlatformer->Text = L"Platformer";
			this->labelPlatformer->Visible = false;
			this->labelPlatformer->Click += gcnew System::EventHandler(this, &MyForm::labelPlatformer_Click);
			// 
			// labelSurvival
			// 
			this->labelSurvival->AutoSize = true;
			this->labelSurvival->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelSurvival->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSurvival->Location = System::Drawing::Point(340, 57);
			this->labelSurvival->Name = L"labelSurvival";
			this->labelSurvival->Size = System::Drawing::Size(77, 21);
			this->labelSurvival->TabIndex = 41;
			this->labelSurvival->Text = L"Survival";
			this->labelSurvival->Visible = false;
			// 
			// pictureUpAuth
			// 
			this->pictureUpAuth->BackColor = System::Drawing::SystemColors::ControlDark;
			this->pictureUpAuth->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureUpAuth->Location = System::Drawing::Point(192, 83);
			this->pictureUpAuth->Name = L"pictureUpAuth";
			this->pictureUpAuth->Size = System::Drawing::Size(389, 33);
			this->pictureUpAuth->TabIndex = 42;
			this->pictureUpAuth->TabStop = false;
			this->pictureUpAuth->Visible = false;
			// 
			// pictureAdmin
			// 
			this->pictureAdmin->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureAdmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureAdmin.Image")));
			this->pictureAdmin->Location = System::Drawing::Point(292, 134);
			this->pictureAdmin->Name = L"pictureAdmin";
			this->pictureAdmin->Size = System::Drawing::Size(181, 158);
			this->pictureAdmin->TabIndex = 43;
			this->pictureAdmin->TabStop = false;
			this->pictureAdmin->Visible = false;
			// 
			// buttonAdminShooter
			// 
			this->buttonAdminShooter->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonAdminShooter->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAdminShooter->Location = System::Drawing::Point(167, 300);
			this->buttonAdminShooter->Name = L"buttonAdminShooter";
			this->buttonAdminShooter->Size = System::Drawing::Size(75, 23);
			this->buttonAdminShooter->TabIndex = 44;
			this->buttonAdminShooter->Text = L"Shooter";
			this->buttonAdminShooter->UseVisualStyleBackColor = false;
			this->buttonAdminShooter->Visible = false;
			this->buttonAdminShooter->Click += gcnew System::EventHandler(this, &MyForm::buttonAdminShooter_Click);
			// 
			// buttonAdminFighting
			// 
			this->buttonAdminFighting->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonAdminFighting->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAdminFighting->Location = System::Drawing::Point(254, 300);
			this->buttonAdminFighting->Name = L"buttonAdminFighting";
			this->buttonAdminFighting->Size = System::Drawing::Size(75, 23);
			this->buttonAdminFighting->TabIndex = 45;
			this->buttonAdminFighting->Text = L"Fighting";
			this->buttonAdminFighting->UseVisualStyleBackColor = false;
			this->buttonAdminFighting->Visible = false;
			this->buttonAdminFighting->Click += gcnew System::EventHandler(this, &MyForm::buttonAdminFighting_Click);
			// 
			// buttonAdminPlatformer
			// 
			this->buttonAdminPlatformer->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonAdminPlatformer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAdminPlatformer->Location = System::Drawing::Point(338, 301);
			this->buttonAdminPlatformer->Name = L"buttonAdminPlatformer";
			this->buttonAdminPlatformer->Size = System::Drawing::Size(75, 23);
			this->buttonAdminPlatformer->TabIndex = 46;
			this->buttonAdminPlatformer->Text = L"Platformer";
			this->buttonAdminPlatformer->UseVisualStyleBackColor = false;
			this->buttonAdminPlatformer->Visible = false;
			this->buttonAdminPlatformer->Click += gcnew System::EventHandler(this, &MyForm::buttonAdminPlatformer_Click);
			// 
			// buttonAdminSurvival
			// 
			this->buttonAdminSurvival->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonAdminSurvival->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAdminSurvival->Location = System::Drawing::Point(422, 301);
			this->buttonAdminSurvival->Name = L"buttonAdminSurvival";
			this->buttonAdminSurvival->Size = System::Drawing::Size(75, 23);
			this->buttonAdminSurvival->TabIndex = 47;
			this->buttonAdminSurvival->Text = L"Survival";
			this->buttonAdminSurvival->UseVisualStyleBackColor = false;
			this->buttonAdminSurvival->Visible = false;
			this->buttonAdminSurvival->Click += gcnew System::EventHandler(this, &MyForm::buttonAdminSurvival_Click);
			// 
			// buttonAdminAllGames
			// 
			this->buttonAdminAllGames->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonAdminAllGames->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAdminAllGames->Location = System::Drawing::Point(506, 301);
			this->buttonAdminAllGames->Name = L"buttonAdminAllGames";
			this->buttonAdminAllGames->Size = System::Drawing::Size(75, 23);
			this->buttonAdminAllGames->TabIndex = 48;
			this->buttonAdminAllGames->Text = L"All Games";
			this->buttonAdminAllGames->UseVisualStyleBackColor = false;
			this->buttonAdminAllGames->Visible = false;
			this->buttonAdminAllGames->Click += gcnew System::EventHandler(this, &MyForm::buttonAdminAllGames_Click);
			// 
			// buttonBackAdminPanel
			// 
			this->buttonBackAdminPanel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonBackAdminPanel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonBackAdminPanel->Location = System::Drawing::Point(478, 388);
			this->buttonBackAdminPanel->Name = L"buttonBackAdminPanel";
			this->buttonBackAdminPanel->Size = System::Drawing::Size(75, 23);
			this->buttonBackAdminPanel->TabIndex = 49;
			this->buttonBackAdminPanel->Text = L"Back";
			this->buttonBackAdminPanel->UseVisualStyleBackColor = false;
			this->buttonBackAdminPanel->Visible = false;
			this->buttonBackAdminPanel->Click += gcnew System::EventHandler(this, &MyForm::buttonBackAdminPanel_Click);
			// 
			// buttonSaveFighting
			// 
			this->buttonSaveFighting->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSaveFighting->Cursor = System::Windows::Forms::Cursors::Default;
			this->buttonSaveFighting->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveFighting->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSaveFighting->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSaveFighting.Image")));
			this->buttonSaveFighting->Location = System::Drawing::Point(380, 381);
			this->buttonSaveFighting->Name = L"buttonSaveFighting";
			this->buttonSaveFighting->Size = System::Drawing::Size(43, 37);
			this->buttonSaveFighting->TabIndex = 50;
			this->buttonSaveFighting->UseVisualStyleBackColor = false;
			this->buttonSaveFighting->Visible = false;
			this->buttonSaveFighting->Click += gcnew System::EventHandler(this, &MyForm::buttonSaveFighting_Click);
			// 
			// buttonSavePlatformer
			// 
			this->buttonSavePlatformer->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSavePlatformer->Cursor = System::Windows::Forms::Cursors::Default;
			this->buttonSavePlatformer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSavePlatformer->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSavePlatformer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSavePlatformer.Image")));
			this->buttonSavePlatformer->Location = System::Drawing::Point(380, 381);
			this->buttonSavePlatformer->Name = L"buttonSavePlatformer";
			this->buttonSavePlatformer->Size = System::Drawing::Size(43, 37);
			this->buttonSavePlatformer->TabIndex = 51;
			this->buttonSavePlatformer->UseVisualStyleBackColor = false;
			this->buttonSavePlatformer->Visible = false;
			this->buttonSavePlatformer->Click += gcnew System::EventHandler(this, &MyForm::buttonSavePlatformer_Click);
			// 
			// buttonSaveSurvival
			// 
			this->buttonSaveSurvival->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSaveSurvival->Cursor = System::Windows::Forms::Cursors::Default;
			this->buttonSaveSurvival->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveSurvival->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSaveSurvival->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSaveSurvival.Image")));
			this->buttonSaveSurvival->Location = System::Drawing::Point(380, 381);
			this->buttonSaveSurvival->Name = L"buttonSaveSurvival";
			this->buttonSaveSurvival->Size = System::Drawing::Size(43, 37);
			this->buttonSaveSurvival->TabIndex = 52;
			this->buttonSaveSurvival->UseVisualStyleBackColor = false;
			this->buttonSaveSurvival->Visible = false;
			this->buttonSaveSurvival->Click += gcnew System::EventHandler(this, &MyForm::buttonSaveSurvival_Click);
			// 
			// buttonSaveAllGames
			// 
			this->buttonSaveAllGames->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSaveAllGames->Cursor = System::Windows::Forms::Cursors::Default;
			this->buttonSaveAllGames->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveAllGames->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSaveAllGames->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSaveAllGames.Image")));
			this->buttonSaveAllGames->Location = System::Drawing::Point(380, 381);
			this->buttonSaveAllGames->Name = L"buttonSaveAllGames";
			this->buttonSaveAllGames->Size = System::Drawing::Size(43, 37);
			this->buttonSaveAllGames->TabIndex = 53;
			this->buttonSaveAllGames->UseVisualStyleBackColor = false;
			this->buttonSaveAllGames->Visible = false;
			this->buttonSaveAllGames->Click += gcnew System::EventHandler(this, &MyForm::buttonSaveAllGames_Click);
			// 
			// labelAllGames
			// 
			this->labelAllGames->AutoSize = true;
			this->labelAllGames->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelAllGames->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAllGames->Location = System::Drawing::Point(337, 56);
			this->labelAllGames->Name = L"labelAllGames";
			this->labelAllGames->Size = System::Drawing::Size(94, 21);
			this->labelAllGames->TabIndex = 54;
			this->labelAllGames->Text = L"All Games";
			this->labelAllGames->Visible = false;
			// 
			// buttonExitAdmin
			// 
			this->buttonExitAdmin->BackColor = System::Drawing::SystemColors::ControlDark;
			this->buttonExitAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonExitAdmin.BackgroundImage")));
			this->buttonExitAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonExitAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonExitAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExitAdmin->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->buttonExitAdmin->Location = System::Drawing::Point(575, 95);
			this->buttonExitAdmin->Name = L"buttonExitAdmin";
			this->buttonExitAdmin->Size = System::Drawing::Size(26, 26);
			this->buttonExitAdmin->TabIndex = 55;
			this->buttonExitAdmin->UseVisualStyleBackColor = false;
			this->buttonExitAdmin->Visible = false;
			this->buttonExitAdmin->Click += gcnew System::EventHandler(this, &MyForm::buttonExitAdmin_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(778, 478);
			this->Controls->Add(this->buttonExitAdmin);
			this->Controls->Add(this->labelAdminPanel);
			this->Controls->Add(this->pictureUpAdmin);
			this->Controls->Add(this->buttonAdminAllGames);
			this->Controls->Add(this->buttonAdminSurvival);
			this->Controls->Add(this->buttonAdminPlatformer);
			this->Controls->Add(this->buttonAdminFighting);
			this->Controls->Add(this->buttonAdminShooter);
			this->Controls->Add(this->pictureAdmin);
			this->Controls->Add(this->pictureFontAdmin);
			this->Controls->Add(this->labelAllGames);
			this->Controls->Add(this->buttonSaveAllGames);
			this->Controls->Add(this->buttonSaveSurvival);
			this->Controls->Add(this->buttonSavePlatformer);
			this->Controls->Add(this->buttonSaveFighting);
			this->Controls->Add(this->buttonBackAdminPanel);
			this->Controls->Add(this->richTextBox);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->buttonAddInfo);
			this->Controls->Add(this->buttonSaveShooter);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->labelSurvival);
			this->Controls->Add(this->labelPlatformer);
			this->Controls->Add(this->labelFighting);
			this->Controls->Add(this->labelChoose);
			this->Controls->Add(this->labelShooter);
			this->Controls->Add(this->buttonShooter);
			this->Controls->Add(this->buttonFighting);
			this->Controls->Add(this->buttonPlatformer);
			this->Controls->Add(this->buttonSurvival);
			this->Controls->Add(this->pictureShooter);
			this->Controls->Add(this->pictureFontShooter);
			this->Controls->Add(this->pictureFighting);
			this->Controls->Add(this->pictureFontFighting);
			this->Controls->Add(this->picturePlatformer);
			this->Controls->Add(this->pictureFontPlatformer);
			this->Controls->Add(this->pictureSurvival);
			this->Controls->Add(this->pictureFontSurvival);
			this->Controls->Add(this->buttonAllGames);
			this->Controls->Add(this->pictureAllGames);
			this->Controls->Add(this->pictureFontAllGames);
			this->Controls->Add(this->buttonAdmin);
			this->Controls->Add(this->pictureBoxUp);
			this->Controls->Add(this->pictureFont);
			this->Controls->Add(this->labelAuth);
			this->Controls->Add(this->buttonBackAdmin);
			this->Controls->Add(this->textLogin);
			this->Controls->Add(this->labelLogin);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->textPassword);
			this->Controls->Add(this->buttonEnterAuth);
			this->Controls->Add(this->pictureUpAuth);
			this->Controls->Add(this->pictureFontAuth);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Computer_games";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFont))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontAuth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontAdmin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUpAdmin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAllGames))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontAllGames))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePlatformer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontPlatformer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureSurvival))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontSurvival))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontFighting))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFighting))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFontShooter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureShooter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUpAuth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAdmin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//
	// Main
	// 
	//Button Category
	// 
	//Button Shooter
	private: System::Void buttonShooter_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = true;
		//Button
		buttonAllGames->Visible = false; //Button Platformer
		buttonSearch->Visible = true; //Button Search
		buttonBack->Visible = true; //Button Back
		buttonAdmin->Visible = false; //Button Admin
		buttonShooter->Visible = false; //Button Shooter
		buttonFighting->Visible = false; //Button Fighting
		buttonPlatformer->Visible = false; //Button Platformer
		buttonSurvival->Visible = false; //Button Survival
		//Text Box
		textBoxSearch->Text = ""; //Clean Text Box Search
		richTextBox->Visible = true; //Input Text Box
		textBoxSearch->Visible = true; //Text Box Search
		//Label
		labelShooter->Visible = true; //Text Platformer
		labelChoose->Visible = false; //Text Choose a category
		//Picture Box
		pictureShooter->Visible = false; //Picture Shooter
		pictureFighting->Visible = false; //PictureFighting
		picturePlatformer->Visible = false; //Picture Platformer
		pictureSurvival->Visible = false; //Picture Survival
		pictureAllGames->Visible = false; //Picture All Games
		pictureFontShooter->Visible = false; //Boarder Shooter
		pictureFontFighting->Visible = false; //Boarder Fighting
		pictureFontPlatformer->Visible = false; //Boarder Platformer
		pictureFontSurvival->Visible = false; //Boarder Survival
		pictureFontAllGames->Visible = false; //Boarder AllGames
		//Чтение Файла
		StreamReader^ filename = File::OpenText("shooter.txt");
		if (String^ s = filename->ReadToEnd())
			this->richTextBox->Text = s;
		delete (IDisposable^)filename;
	}
	//Button Fighting
	private: System::Void buttonFighting_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = true;
		//Button
		buttonAllGames->Visible = false; //Button Platformer
		buttonSearch->Visible = true; //Button Search
		buttonBack->Visible = true; //Button Back
		buttonAdmin->Visible = false; //Button Admin
		buttonShooter->Visible = false; //Button Shooter
		buttonFighting->Visible = false; //Button Fighting
		buttonPlatformer->Visible = false; //Button Platformer
		buttonSurvival->Visible = false; //Button Survival
		//Text Box
		textBoxSearch->Text = ""; //Пустой TextBox
		richTextBox->Visible = true; //Поле для ввода
		textBoxSearch->Visible = true; //Поле Search
		//Label
		labelFighting->Visible = true; //Текст Platformer
		labelChoose->Visible = false; //Текст Choose Category
		//Picture Box
		pictureShooter->Visible = false; //Picture Shooter
		pictureFighting->Visible = false; //Picture Fighting
		picturePlatformer->Visible = false; //Picture Platformer
		pictureSurvival->Visible = false; //Picture Survival
		pictureAllGames->Visible = false; //Picture All Games
		pictureFontShooter->Visible = false; //Boarder Shooter
		pictureFontFighting->Visible = false; //Boarder Fighting
		pictureFontPlatformer->Visible = false; //Boarder Platformer
		pictureFontSurvival->Visible = false; //Boarder Survival
		pictureFontAllGames->Visible = false; //Boarder All Games
		//Чтение Файла
		StreamReader^ filename = File::OpenText("fighting.txt");
		if (String^ s = filename->ReadToEnd())
			this->richTextBox->Text = s;
		delete (IDisposable^)filename;
	}
	//Button Platformer
	private: System::Void buttonPlatformer_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = true;
		//Button
		buttonAllGames->Visible = false; //Button Platformer
		buttonSearch->Visible = true; //Button Search
		buttonBack->Visible = true; //Button Back
		buttonAdmin->Visible = false; //Button Admin
		buttonShooter->Visible = false; //Button Shooter
		buttonFighting->Visible = false; //Button Fighting
		buttonPlatformer->Visible = false; //Button Platformer
		buttonSurvival->Visible = false; //Button Survival
		//Text Box
		textBoxSearch->Text = ""; //Пустой TextBox
		richTextBox->Visible = true; //Поле для ввода
		textBoxSearch->Visible = true; //Поле Search
		//Label
		labelPlatformer->Visible = true; //Текст Platformer
		labelChoose->Visible = false; //Текст Choose Category
		//Picture Box
		pictureShooter->Visible = false; //Picture Shooter
		pictureFighting->Visible = false; //Picture Fighting
		picturePlatformer->Visible = false; //Picture Platformer
		pictureSurvival->Visible = false; //Picture Survival
		pictureAllGames->Visible = false; //Picture All Games
		pictureFontShooter->Visible = false; //Boarder Shooter
		pictureFontFighting->Visible = false; //Boarder Fighting
		pictureFontPlatformer->Visible = false; //Boarder Platformer
		pictureFontSurvival->Visible = false; //Boarder Survival
		pictureFontAllGames->Visible = false; //Boarder All Games
		//Чтение Файла
		StreamReader^ filename = File::OpenText("platformer.txt");
		if (String^ s = filename->ReadToEnd())
			this->richTextBox->Text = s;
		delete (IDisposable^)filename;
	}
	//Button Survival
	private: System::Void buttonSurvival_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = true;
		//Button
		buttonAllGames->Visible = false; //Button Platformer
		buttonSearch->Visible = true; //Button Search
		buttonBack->Visible = true; //Button Back
		buttonAdmin->Visible = false; //Button Admin
		buttonShooter->Visible = false; //Button Shooter
		buttonFighting->Visible = false; //Button Fighting
		buttonPlatformer->Visible = false; //Button Platformer
		buttonSurvival->Visible = false; //Button Survival
		//Text Box
		textBoxSearch->Text = ""; //Clean TextBox
		richTextBox->Visible = true; //Поле для ввода
		textBoxSearch->Visible = true; //Поле Search
		//Label
		labelSurvival->Visible = true; //Текст Survival
		labelChoose->Visible = false; //Текст Choose Category
		//Picture Box
		pictureShooter->Visible = false; //Picture Shooter
		pictureFighting->Visible = false; //Picture Fighting
		picturePlatformer->Visible = false; //Picture Platformer
		pictureSurvival->Visible = false; //Picture Survival
		pictureAllGames->Visible = false; //Picture All Games
		pictureFontShooter->Visible = false; //Boarder Shooter
		pictureFontFighting->Visible = false; //Boarder Fighting
		pictureFontPlatformer->Visible = false; //Boarder Platformer
		pictureFontSurvival->Visible = false; //Boarder Survival
		pictureFontAllGames->Visible = false; //Boarder All Games
		//Чтение Файла
		StreamReader^ filename = File::OpenText("survival.txt");
		if (String^ s = filename->ReadToEnd())
			this->richTextBox->Text = s;
		delete (IDisposable^)filename;
	}
	//Button AllGames
	private: System::Void buttonAllGames_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = true;
		//Button
		buttonAllGames->Visible = false; //Button Platformer
		buttonSearch->Visible = true; //Button Search
		buttonBack->Visible = true; //Button Back
		buttonAdmin->Visible = false; //Button Admin
		buttonShooter->Visible = false; //Button Shooter
		buttonFighting->Visible = false; //Button Fighting
		buttonPlatformer->Visible = false; //Button Platformer
		buttonSurvival->Visible = false; //Button Survival
		//Text Box
		textBoxSearch->Text = ""; //Clean TextBox
		richTextBox->Visible = true; //Поле для ввода
		textBoxSearch->Visible = true; //Поле Search
		//Label
		labelAllGames->Visible = true; //Текст Survival
		labelChoose->Visible = false; //Текст Choose Category
		//Picture Box
		pictureShooter->Visible = false; //Picture Shooter
		pictureFighting->Visible = false; //Picture Fighting
		picturePlatformer->Visible = false; //Picture Platformer
		pictureSurvival->Visible = false; //Picture Survival
		pictureAllGames->Visible = false; //Picture All Games
		pictureFontShooter->Visible = false; //Boarder Shooter
		pictureFontFighting->Visible = false; //Boarder Fighting
		pictureFontPlatformer->Visible = false; //Boarder Platformer
		pictureFontSurvival->Visible = false; //Boarder Survival
		pictureFontAllGames->Visible = false; //Boarder All Games
		//Чтение Файла
		StreamReader^ filename = File::OpenText("allgames.txt");
		if (String^ s = filename->ReadToEnd())
			this->richTextBox->Text = s;
		delete (IDisposable^)filename;


	}
	//
	// Button Interface
	// 
	//Button Search
	private: System::Void buttonSearch_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int index = 0;
		String^ temp = richTextBox->Text;
		richTextBox->Text = "";
		richTextBox->Text = temp;

		while (index < richTextBox->Text->LastIndexOf(textBoxSearch->Text)) {
			richTextBox->Find(textBoxSearch->Text, index, richTextBox->TextLength, RichTextBoxFinds::None);
			richTextBox->SelectionBackColor = Color::Red;
			index = richTextBox->Text->IndexOf(textBoxSearch->Text, index) + 1;
		}
	}
	//Button Add Info
	private: System::Void buttonAddInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox->Text += "\n------------------------------------------------------------------------------------------------------------------------------\nName:\nCategory:\nDate of release :\nSystem requirements :\n  OS:\n  CPU:\n  RAM:\n  Video Card :\n  Disk Space :";
	}
	//Button Back
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) {
		if (flag == false) {
			if (MessageBox::Show(this, "Вы не сохранили файл!\n             Выйти?", "Сообщение",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				//Button
				buttonAllGames->Visible = true; //Button Platformer
				buttonSearch->Visible = false; //Button Search
				buttonAddInfo->Visible = false; //Button Add Info
				buttonBack->Visible = false; //Button Back
				buttonAdmin->Visible = true; //Button Admin
				buttonShooter->Visible = true; //Button Shooter
				buttonFighting->Visible = true; //Button Fighting
				buttonPlatformer->Visible = true; //Button Platformer
				buttonSurvival->Visible = true; //Button Survival
				buttonAdminShooter->Visible = false; //Button Admin Shooter
				buttonAdminFighting->Visible = false; //Button Admin Fighting
				buttonAdminPlatformer->Visible = false; //Button Admin Platformer
				buttonAdminSurvival->Visible = false; //Button Admin Survival
				buttonAdminAllGames->Visible = false; //Button Admin All Games
				buttonBackAdminPanel->Visible = false; //Button Back Admin Panel
				buttonSaveShooter->Visible = false; //Button Save
				buttonSaveFighting->Visible = false; //Button Save Fighting
				buttonSavePlatformer->Visible = false; //Button Save Platformer 
				buttonSaveSurvival->Visible = false; //Button Save Survival
				buttonSaveAllGames->Visible = false; //Button Save All Games
				//Label
				labelShooter->Visible = false; //Текст Shooter
				labelPlatformer->Visible = false; //Текст Platformer
				labelFighting->Visible = false; //Текст Fighting
				labelSurvival->Visible = false; //Текст Survival
				labelChoose->Visible = true; //Текст Choose Category
				labelAdminPanel->Visible = false; //Текст AdminPanel
				labelAllGames->Visible = false; //Текст All Games
				//Text Box
				richTextBox->Visible = false; //Поле для ввода
				textBoxSearch->Visible = false; //Поле Search
				//Picture Box
				pictureBoxUp->Visible = true; //Верхний Boarder
				pictureFontAdmin->Visible = false; //Фон для Admin Panel
				pictureFont->Visible = true; //Фон
				pictureFontAdmin->Visible = false; //Фон Админ Панели
				pictureUpAdmin->Visible = false; //Верхний Boarder для AdminPanel
				pictureShooter->Visible = true; //Picture Shooter
				pictureFighting->Visible = true; //Picture Fighting
				picturePlatformer->Visible = true; //Picture Platformer
				pictureSurvival->Visible = true; //Picture Survival
				pictureAllGames->Visible = true; //Picture All Games
				pictureFontShooter->Visible = true; //Boarder Picture Shooter
				pictureFontFighting->Visible = true; //Boarder Picture Fighting
				pictureFontPlatformer->Visible = true; //Boarder Picture Platformer
				pictureFontSurvival->Visible = true; //Boarder Picture Survival
				pictureFontAllGames->Visible = true; //Boarder Picture All Games
				pictureAdmin->Visible = false; //Picture Admin
			}
			else {

			}
		}
		else {
			//Button
			buttonAllGames->Visible = true; //Button Platformer
			buttonSearch->Visible = false; //Button Search
			buttonAddInfo->Visible = false; //Button Add Info
			buttonBack->Visible = false; //Button Back
			buttonAdmin->Visible = true; //Button Admin
			buttonShooter->Visible = true; //Button Shooter
			buttonFighting->Visible = true; //Button Fighting
			buttonPlatformer->Visible = true; //Button Platformer
			buttonSurvival->Visible = true; //Button Survival
			buttonAdminShooter->Visible = false; //Button Admin Shooter
			buttonAdminFighting->Visible = false; //Button Admin Fighting
			buttonAdminPlatformer->Visible = false; //Button Admin Platformer
			buttonAdminSurvival->Visible = false; //Button Admin Survival
			buttonAdminAllGames->Visible = false; //Button Admin All Games
			buttonBackAdminPanel->Visible = false; //Button Back Admin Panel
			buttonSaveShooter->Visible = false; //Button Save
			buttonSaveFighting->Visible = false; //Button Save Fighting
			buttonSavePlatformer->Visible = false; //Button Save Platformer 
			buttonSaveSurvival->Visible = false; //Button Save Survival
			buttonSaveAllGames->Visible = false; //Button Save All Games
			//Label
			labelShooter->Visible = false; //Текст Shooter
			labelPlatformer->Visible = false; //Текст Platformer
			labelFighting->Visible = false; //Текст Fighting
			labelSurvival->Visible = false; //Текст Survival
			labelChoose->Visible = true; //Текст Choose Category
			labelAdminPanel->Visible = false; //Текст AdminPanel
			labelAllGames->Visible = false; //Текст All Games
			//Text Box
			richTextBox->Visible = false; //Поле для ввода
			textBoxSearch->Visible = false; //Поле Search
			//Picture Box
			pictureBoxUp->Visible = true; //Верхний Boarder
			pictureFontAdmin->Visible = false; //Фон для Admin Panel
			pictureFont->Visible = true; //Фон
			pictureFontAdmin->Visible = false; //Фон Админ Панели
			pictureUpAdmin->Visible = false; //Верхний Boarder для AdminPanel
			pictureShooter->Visible = true; //Picture Shooter
			pictureFighting->Visible = true; //Picture Fighting
			picturePlatformer->Visible = true; //Picture Platformer
			pictureSurvival->Visible = true; //Picture Survival
			pictureAllGames->Visible = true; //Picture All Games
			pictureFontShooter->Visible = true; //Boarder Picture Shooter
			pictureFontFighting->Visible = true; //Boarder Picture Fighting
			pictureFontPlatformer->Visible = true; //Boarder Picture Platformer
			pictureFontSurvival->Visible = true; //Boarder Picture Survival
			pictureFontAllGames->Visible = true; //Boarder Picture All Games
			pictureAdmin->Visible = false; //Picture Admin
		}
	}
	//
	//Admin
	//
	//Авторизация
	//
	bool Autorization(String^ login, String^ password) {
		if (login == "qwerty" && password == "123")
		{
			return true;
		}
		else {
			MessageBox::Show(this, "Вы ввели неверный пароль!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
	}
	//Button Admin panel
	private: System::Void buttonAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		//Button
		buttonAllGames->Visible = false; //Button Platformer
		buttonAdmin->Visible = false;
		buttonShooter->Visible = false;
		buttonFighting->Visible = false;
		buttonPlatformer->Visible = false;
		buttonSurvival->Visible = false;
		//Picture Box
		pictureFont->Visible = false;
		pictureBoxUp->Visible = false;
		pictureShooter->Visible = false;
		pictureFighting->Visible = false;
		picturePlatformer->Visible = false;
		pictureSurvival->Visible = false;
		pictureAllGames->Visible = false;
		pictureFontShooter->Visible = false;
		pictureFontFighting->Visible = false;
		pictureFontPlatformer->Visible = false;
		pictureFontSurvival->Visible = false;
		pictureFontAllGames->Visible = false;
		labelChoose->Visible = false;
		//Open
		//Button
		buttonBackAdmin->Visible = true;
		buttonEnterAuth->Visible = true;
		//Label
		labelAuth->Visible = true;
		labelLogin->Visible = true;
		labelPassword->Visible = true;
		//Text Box
		textPassword->PasswordChar = '*';
		textLogin->Visible = true;
		textPassword->Visible = true;
		//Picture Box
		pictureUpAuth->Visible = true;
		pictureFontAuth->Visible = true;
	}
	//Button enter autorization
	private: System::Void buttonEnterAuth_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ log = textLogin->Text;
		String^ pas = textPassword->Text;
		if (Autorization(log, pas)) {
			//Clean
			textLogin->Text = "";
			textPassword->Text = "";
			//Button
			buttonEnterAuth->Visible = false;
			buttonBackAdmin->Visible = false;
			buttonExitAdmin->Visible = true;
			buttonAdminShooter->Visible = true;
			buttonAdminFighting->Visible = true;
			buttonAdminPlatformer->Visible = true;
			buttonAdminSurvival->Visible = true;
			buttonAdminAllGames->Visible = true;
			//Label
			labelAuth->Visible = false;
			labelLogin->Visible = false;
			labelPassword->Visible = false;
			//Text Box
			textLogin->Visible = false;
			textPassword->Visible = false;
			//Picture Box
			pictureFontAuth->Visible = false;
			pictureUpAuth->Visible = false;
			//Label
			labelAdminPanel->Visible = true;
			//Picture Box
			pictureAdmin->Visible = true;
			pictureUpAdmin->Visible = true;
			pictureFontAdmin->Visible = true;
			//
			//Чтение Файла
			StreamReader^ filename = File::OpenText("allgames.txt");
			if (String^ s = filename->ReadToEnd())
				this->richTextBox->Text = s;
			delete (IDisposable^)filename;
		}
	}
	//
	//Button Admin Panel
	// 
	//Button Admin Shooter
	private: System::Void buttonAdminShooter_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = false;
		//Button
		buttonSaveShooter->Visible = true;
		buttonAdminAllGames->Visible = false; //Button Platformer
		buttonSearch->Visible = true; //Button Search
		buttonAdmin->Visible = false;
		buttonAdminShooter->Visible = false;
		buttonAdminFighting->Visible = false;
		buttonAdminPlatformer->Visible = false;
		buttonAdminSurvival->Visible = false;
		buttonAddInfo->Visible = true;
		buttonBackAdminPanel->Visible = true;
		buttonExitAdmin->Visible = false;
		buttonBack->Visible = true;
		//Text Box
		textBoxSearch->Text = "";
		richTextBox->Visible = true; //Поле для ввода
		textBoxSearch->Visible = true; //Поле Search
		//Label
		labelShooter->Visible = true; //Текст Platformer
		labelAdminPanel->Visible = false;
		//Picture Box
		pictureBoxUp->Visible = true;
		pictureUpAdmin->Visible = false;
		pictureAdmin->Visible = false;
		pictureFontAdmin->Visible = false;
		pictureFont->Visible = true;
		//Чтение Файла
		StreamReader^ filename = File::OpenText("shooter.txt");
		if (String^ s = filename->ReadToEnd())
			this->richTextBox->Text = s;
		delete (IDisposable^)filename;
	}
	//Button Admin Fighting
	private: System::Void buttonAdminFighting_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = false;
		//Button
		buttonAdminAllGames->Visible = false; //Button Platformer
		buttonSearch->Visible = true; //Button Search
		buttonAdmin->Visible = false;
		buttonAdminShooter->Visible = false;
		buttonAdminFighting->Visible = false;
		buttonAdminPlatformer->Visible = false;
		buttonAdminSurvival->Visible = false;
		buttonAddInfo->Visible = true;
		buttonBackAdminPanel->Visible = true;
		buttonSaveFighting->Visible = true;
		buttonExitAdmin->Visible = false;
		buttonBack->Visible = true;
		//Text Box
		textBoxSearch->Text = "";
		richTextBox->Visible = true; //Поле для ввода
		textBoxSearch->Visible = true; //Поле Search
		//Label
		labelFighting->Visible = true; //Текст Fighting
		labelAdminPanel->Visible = false;
		//Picture Box
		pictureBoxUp->Visible = true;
		pictureUpAdmin->Visible = false;
		pictureAdmin->Visible = false;
		pictureFontAdmin->Visible = false;
		pictureFont->Visible = true;
		//Чтение Файла
		StreamReader^ filename = File::OpenText("fighting.txt");
		if (String^ s = filename->ReadToEnd())
			this->richTextBox->Text = s;
		delete (IDisposable^)filename;
	}
	//Button Admin Platformer
	private: System::Void buttonAdminPlatformer_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = false;
		//Button
		buttonAdminAllGames->Visible = false; //Button Platformer
		buttonSearch->Visible = true; //Button Search
		buttonAdmin->Visible = false;
		buttonAdminShooter->Visible = false;
		buttonAdminFighting->Visible = false;
		buttonAdminPlatformer->Visible = false;
		buttonAdminSurvival->Visible = false;
		buttonSavePlatformer->Visible = true;
		buttonAddInfo->Visible = true;
		buttonBackAdminPanel->Visible = true;
		buttonExitAdmin->Visible = false;
		buttonBack->Visible = true;
		//Text Box
		textBoxSearch->Text = "";
		richTextBox->Visible = true; //Поле для ввода
		textBoxSearch->Visible = true; //Поле Search
		//Label
		labelPlatformer->Visible = true; //Текст Platformer
		labelAdminPanel->Visible = false;
		//Picture Box
		pictureBoxUp->Visible = true;
		pictureUpAdmin->Visible = false;
		pictureAdmin->Visible = false;
		pictureFontAdmin->Visible = false;
		pictureFont->Visible = true;
		//Чтение Файла
		StreamReader^ filename = File::OpenText("platformer.txt");
		if (String^ s = filename->ReadToEnd())
			this->richTextBox->Text = s;
		delete (IDisposable^)filename;
	}
	//Button Admin Survival
	private: System::Void buttonAdminSurvival_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = false;
		//Button
		buttonAdminAllGames->Visible = false; //Button Platformer
		buttonSearch->Visible = true; //Button Search
		buttonAdmin->Visible = false;
		buttonAdminShooter->Visible = false;
		buttonAdminFighting->Visible = false;
		buttonAdminPlatformer->Visible = false;
		buttonAdminSurvival->Visible = false;
		buttonSaveSurvival->Visible = true;
		buttonAddInfo->Visible = true;
		buttonBackAdminPanel->Visible = true;
		buttonExitAdmin->Visible = false;
		buttonBack->Visible = true;
		//Text Box
		textBoxSearch->Text = "";
		richTextBox->Visible = true; //Поле для ввода
		textBoxSearch->Visible = true; //Поле Search
		//Label
		labelSurvival->Visible = true; //Текст Platformer
		labelAdminPanel->Visible = false;
		//Picture Box
		pictureBoxUp->Visible = true;
		pictureUpAdmin->Visible = false;
		pictureAdmin->Visible = false;
		pictureFontAdmin->Visible = false;
		pictureFont->Visible = true;
		//Чтение Файла
		StreamReader^ filename = File::OpenText("survival.txt");
		if (String^ s = filename->ReadToEnd())
			this->richTextBox->Text = s;
		delete (IDisposable^)filename;
	}
	//Button Admin AllGames
	private: System::Void buttonAdminAllGames_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = false;
		//Button
		buttonAdminAllGames->Visible = false; //Button Platformer
		buttonSearch->Visible = true; //Button Search
		buttonAdmin->Visible = false;
		buttonAdminShooter->Visible = false;
		buttonAdminFighting->Visible = false;
		buttonAdminPlatformer->Visible = false;
		buttonAdminSurvival->Visible = false;
		buttonSaveAllGames->Visible = true;
		buttonAddInfo->Visible = true;
		buttonBackAdminPanel->Visible = true;
		buttonExitAdmin->Visible = false;
		buttonBack->Visible = true;
		//Text Box
		textBoxSearch->Text = "";
		richTextBox->Visible = true; //Поле для ввода
		textBoxSearch->Visible = true; //Поле Search
		//Label
		labelAllGames->Visible = true; //Текст Platformer
		labelAdminPanel->Visible = false;
		//Picture Box
		pictureBoxUp->Visible = true;
		pictureUpAdmin->Visible = false;
		pictureAdmin->Visible = false;
		pictureFontAdmin->Visible = false;
		pictureFont->Visible = true;
		//Чтение Файла
		StreamReader^ filename = File::OpenText("allgames.txt");
		if (String^ s = filename->ReadToEnd())
			this->richTextBox->Text = s;
		delete (IDisposable^)filename;
	}
	//
	//Button Save Admin
	//
	//Button Save Admin Shooter
	private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
		//Сохранение файла
		String^ word = richTextBox->Text;
		saveShooter(word);
		flag = true;
	}
	//Button Save Admin Fighting
	private: System::Void buttonSaveFighting_Click(System::Object^ sender, System::EventArgs^ e) {
		//Сохранение файла
		String^ word = richTextBox->Text;
		saveFighting(word);
		flag = true;
	}
	//Button Save Admin Platformer
	private: System::Void buttonSavePlatformer_Click(System::Object^ sender, System::EventArgs^ e) {
		//Сохранение файла
		String^ word = richTextBox->Text;
		savePlatformer(word);
		flag = true;
	}
	//Button Save Admin Survival
	private: System::Void buttonSaveSurvival_Click(System::Object^ sender, System::EventArgs^ e) {
		//Сохранение файла
		String^ word = richTextBox->Text;
		saveSurvival(word);
		flag = true;
	}
	//Button Save Admin AllGames
	private: System::Void buttonSaveAllGames_Click(System::Object^ sender, System::EventArgs^ e) {
		//Сохранение файла
		String^ word = richTextBox->Text;
		saveAllGames(word);
		flag = true;
	}
	//
	//Button Back
	//
	//Button Back Admin
	private: System::Void buttonBackAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		//Open
		//Button
		buttonAllGames->Visible = true; //Button Platformer
		buttonAdmin->Visible = true;
		buttonShooter->Visible = true;
		buttonFighting->Visible = true;
		buttonPlatformer->Visible = true;
		buttonSurvival->Visible = true;
		//Picture Box
		pictureFont->Visible = true;
		pictureBoxUp->Visible = true;
		pictureShooter->Visible = true;
		pictureFighting->Visible = true;
		picturePlatformer->Visible = true;
		pictureSurvival->Visible = true;
		pictureAllGames->Visible = true;
		pictureFontShooter->Visible = true;
		pictureFontFighting->Visible = true;
		pictureFontPlatformer->Visible = true;
		pictureFontSurvival->Visible = true;
		pictureFontAllGames->Visible = true;
		labelChoose->Visible = true;
		//Close
		//Button
		buttonBackAdmin->Visible = false;
		buttonEnterAuth->Visible = false;
		//Label
		labelAuth->Visible = false;
		labelLogin->Visible = false;
		labelPassword->Visible = false;
		//Text Box
		textLogin->Visible = false;
		textPassword->Visible = false;
		//Picture Box
		pictureFontAuth->Visible = false;
		pictureUpAuth->Visible = false;

	}
	//Button Back Admin Panel
	private: System::Void buttonBackAdminPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		if (flag == false) {
			if (MessageBox::Show(this, "Вы не сохранили файл!\n             Выйти?", "Сообщение",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				//Button
				buttonAdminShooter->Visible = true;
				buttonAdminFighting->Visible = true;
				buttonAdminPlatformer->Visible = true;
				buttonAdminSurvival->Visible = true;
				buttonAdminAllGames->Visible = true;
				buttonBackAdminPanel->Visible = false;
				buttonSearch->Visible = false;
				buttonSaveShooter->Visible = false;
				buttonAddInfo->Visible = false;
				buttonSaveFighting->Visible = false;
				buttonSavePlatformer->Visible = false;
				buttonSaveSurvival->Visible = false;
				buttonSaveAllGames->Visible = false;
				buttonBack->Visible = false;
				buttonExitAdmin->Visible = true;
				//Label
				labelAdminPanel->Visible = true;
				labelShooter->Visible = false;
				labelFighting->Visible = false;
				labelPlatformer->Visible = false;
				labelSurvival->Visible = false;
				labelAllGames->Visible = false;
				//Text Box
				textBoxSearch->Visible = false;
				richTextBox->Visible = false;
				//Picture Box
				pictureAdmin->Visible = true;
				pictureFont->Visible = false;
				pictureFontAdmin->Visible = true;
				pictureUpAdmin->Visible = true;
				pictureBoxUp->Visible = false;
			}
			else {

			}
		}
		else {
			//Button
			buttonAdminShooter->Visible = true;
			buttonAdminFighting->Visible = true;
			buttonAdminPlatformer->Visible = true;
			buttonAdminSurvival->Visible = true;
			buttonAdminAllGames->Visible = true;
			buttonBackAdminPanel->Visible = false;
			buttonSearch->Visible = false;
			buttonSaveShooter->Visible = false;
			buttonAddInfo->Visible = false;
			buttonSaveFighting->Visible = false;
			buttonSavePlatformer->Visible = false;
			buttonSaveSurvival->Visible = false;
			buttonSaveAllGames->Visible = false;
			buttonBack->Visible = false;
			buttonExitAdmin->Visible = true;
			//Label
			labelAdminPanel->Visible = true;
			labelShooter->Visible = false;
			labelFighting->Visible = false;
			labelPlatformer->Visible = false;
			labelSurvival->Visible = false;
			labelAllGames->Visible = false;
			//Text Box
			textBoxSearch->Visible = false;
			richTextBox->Visible = false;
			//Picture Box
			pictureAdmin->Visible = true;
			pictureFont->Visible = false;
			pictureFontAdmin->Visible = true;
			pictureUpAdmin->Visible = true;
			pictureBoxUp->Visible = false;
		}
	}
	//Button Exit Admin
	private: System::Void buttonExitAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		//Button
		buttonAllGames->Visible = true; //Button Platformer
		buttonSearch->Visible = false; //Button Search
		buttonAddInfo->Visible = false; //Button Add Info
		buttonBack->Visible = false; //Button Back
		buttonAdmin->Visible = true; //Button Admin
		buttonShooter->Visible = true; //Button Shooter
		buttonFighting->Visible = true; //Button Fighting
		buttonPlatformer->Visible = true; //Button Platformer
		buttonSurvival->Visible = true; //Button Survival
		buttonAdminShooter->Visible = false; //Button Admin Shooter
		buttonAdminFighting->Visible = false; //Button Admin Fighting
		buttonAdminPlatformer->Visible = false; //Button Admin Platformer
		buttonAdminSurvival->Visible = false; //Button Admin Survival
		buttonAdminAllGames->Visible = false; //Button Admin All Games
		buttonBackAdminPanel->Visible = false; //Button Back Admin Panel
		buttonSaveShooter->Visible = false; //Button Save
		buttonSaveFighting->Visible = false; //Button Save Fighting
		buttonSavePlatformer->Visible = false; //Button Save Platformer 
		buttonSaveSurvival->Visible = false; //Button Save Survival
		buttonSaveAllGames->Visible = false; //Button Save All Games
		buttonExitAdmin->Visible = false; //Button Exit Admin
		//Label
		labelShooter->Visible = false; //Текст Shooter
		labelPlatformer->Visible = false; //Текст Platformer
		labelFighting->Visible = false; //Текст Fighting
		labelSurvival->Visible = false; //Текст Survival
		labelChoose->Visible = true; //Текст Choose Category
		labelAdminPanel->Visible = false; //Текст AdminPanel
		labelAllGames->Visible = false; //Текст All Games
		//Text Box
		richTextBox->Visible = false; //Поле для ввода
		textBoxSearch->Visible = false; //Поле Search
		//Picture Box
		pictureBoxUp->Visible = true; //Верхний Boarder
		pictureFontAdmin->Visible = false; //Фон для Admin Panel
		pictureFont->Visible = true; //Фон
		pictureFontAdmin->Visible = false; //Фон Админ Панели
		pictureUpAdmin->Visible = false; //Верхний Boarder для AdminPanel
		pictureShooter->Visible = true; //Picture Shooter
		pictureFighting->Visible = true; //Picture Fighting
		picturePlatformer->Visible = true; //Picture Platformer
		pictureSurvival->Visible = true; //Picture Survival
		pictureAllGames->Visible = true; //Picture All Games
		pictureFontShooter->Visible = true; //Boarder Picture Shooter
		pictureFontFighting->Visible = true; //Boarder Picture Fighting
		pictureFontPlatformer->Visible = true; //Boarder Picture Platformer
		pictureFontSurvival->Visible = true; //Boarder Picture Survival
		pictureFontAllGames->Visible = true; //Boarder Picture All Games
		pictureAdmin->Visible = false; //Picture Admin
	}



	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureFont_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelPlatformer_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureFontAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
