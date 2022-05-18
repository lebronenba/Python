def date(day, month, year): #создаем функцию с 3-мя параметрами
    months = {1: 31, 2: 28, 3: 31, 4: 30, 5: 31, 6: 30, 7: 31, 8: 31, 9: 30, 10: 31, 11: 30, 12: 31} # создаем список
    if year > 0 and (month >= 1 and month <= 12): #если year > 0 и month >=1 и month <= 12 то...
        if day in range(months[month]): #генерируем колво months
            return True #возвращаем True
        else: #иначе
            return False #возвращаем False
    else: #иначе
        return False #возвращаем False
print(date(30, 4, 2022))
print(date(10, 13, 2005))
print(date(16, 4, 2018))
print(date(0, 0, 0))
print(date(25, 5, 1900))