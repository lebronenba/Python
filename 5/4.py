from random import randint #из библиотеки random извлекаем randint - генрирует случайное число
list = [0]*15 #Создаем список на 15 элементов
for i in range(15): #генерируем 15 элементов
    list[i] = randint(0,20) #в каждом элементе генерируется число от 0 до 20
print(list) #выводим список
print(max(set(list), key=list.count)) #ищеми выводим максимальное число в списке