months = {"jan":31 , "feb": 28 , "mar":31 , "apr" : 30 , "may" : 31 , "jun" : 30 , "jul" : 31 ,
           "aug" : 31 , "sep" : 30 , "oct" : 31 , "nov" : 30 , "dec" : 31 }

day = int(input("What a day we are in? \n"))
user_month = str(input("What a month we are in? \n"))
year = int(input("What a year we are in? \n"))
salary = int(input("What is employee's salary? \n"))

year = year % 4
if year == 0 :
    months["feb"] = 29
else :
    months["feb"] = 28 
#----------------------------------------------------#
for month in months :
    if user_month == month :
        calc_month = months[user_month]
        rate = salary / calc_month
        dues = rate * day
        print (dues)
    