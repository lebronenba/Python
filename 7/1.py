#Вариант 7
a = tuple(range(1,6)) #создаем кортеж и генерируем в нем цифры от 1 до 6 Кориеж - это упорядоченный набор некоторых элементов.
b = ("Смировнов", "Иванов", "Кузницов", "Козлов", "Петров") #Создаем переменную с фамилиями
c=int(input("Введите номер студента: ")) #Просим пользователя ввести номер студента
print("Студент под номером: ",b[c-1]) #выводим студента которого попросил пользователь
t3 = a + b #Соединяем номер с фамилией студента
print("\n".join([str(i) for i in t3])) #выводим соединенный кортеж
t2=t3[2:-2] #с помощью среза убирем студентов под 1 и 2 номером 
print("-----------")
print("\n".join([str(i) for i in t2])) #выводим соединенный котеж