students = {'1a': 20, '1б': 19, '2a': 21} #Создаем словарь
num = input() #запрашиваем у пользователя данные
if num in students.keys(): #keys()- получаем доступ к ключам словаря
    print(students[num]) #выводим значение ключа
else: #если такого ключа не существует то...
    print('Такого класса не существует')#выводим данное значение
