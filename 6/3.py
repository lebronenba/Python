list1 = [0, 2, 3, 4, 5] #создаем список
list2 = [6, 7, 8, 9] #создаем список
list3 = [0, 4, 6] #создаем список
index = 0 in list1 #ищем в первом списке 0
if index == True: #если index нашел 0 в списке то... 
    print("В первой строке есть 0") #выводим строку
else: #если index не нашел 0 в списке то... 
    print("В первой строке нету 0") #выводим строку
index = 0 in list2 #ищем во втором списке 0
if index == True: #если index нашел 0 в списке то... 
    print("Во второй строке есть 0") #выводим строку
else: #если index не нашел 0 в списке то... 
    print("В второй строке нету 0") #выводим строку
index = 0 in list3 #ищем в третьем списке 0
if index == True: #если index нашел 0 в списке то...
    print("В третей строке есть 0") #выводим строку
else: #если index не нашел 0 в списке то... 
    print("В третей строке нету 0") #выводим строку
