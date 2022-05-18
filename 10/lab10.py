filename = 'people.txt' #создаем переменную в которой указываем путь к файлу
list = { #создаем список фамилий
    "Иванов О.: 4",
    "Петров И.: 3",
    "Дмитриев Н.: 2",
    "Смирнова О.: 4",
    "Керченских В.: 5",
    "Котов Д.: 2",
    "Бирюкова Н.: 1",
    "Данилов П.: 3",
    "Аранских В.: 5",
    "Лемонов Ю.: 2",
    "Олегова К. 4",
}
# Запись list в файл
with open(filename, 'w') as file:
    for item in list:
        file.write(item + '\n')
# Чтение файла
with open(filename, 'r') as file:
    counter = 0 # Счетчик
    summa = 0 # Сумма оценок
    for line in file: # Читаем файл по строчно
        counter += 1 # За каждую строку даем +1 счетчику
        counter_line = len(line) # Создаем переменную counter_line и считаем каждую строку
        for i in range(counter_line): # Сортируем числа
            if line[i].isdigit(): # Ищем в строке числа
                num = int(line[i]) # Создаем переменную num и присваиваем ей числа которые нашли
                summa += num # Создаем переменную summa и присваиваем ей сумму чисел которые мы присвоили переменной num
                if num < 3:
                    print('Ученик у которого средний бал по классу меньше 3-х:', line)
                break
    sredniy = summa / counter # Вычесляем средний балл
    print("\nСредний бал по классу:", sredniy)
