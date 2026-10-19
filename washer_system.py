# Car_Washer_System
print("Hi")
name = input("What’s your name? \n")

print("Nice to meet you," ,name)
answer = input("Do you want the Gold wash Or the Classec wash?\n")

def wash_car ():
    if answer == "gold" :
        print ("The advantages of Gold wash is")
        print ("1- wash with triple foam")
        print ("2- riense twice")
        print ("3- dry with large blow dryer")

    elif answer == "classec" :
        print ("The advantages of classec wash is")
        print ("1- wash with classec foam")
        print ("2- rience once")
        print ("3- air dry")

wash_car()

if answer == "gold" :
    answer1 = input("IT will cost 12$ \n")
    if answer1 == "ok" :
         print ("Ok we will do it")
    elif answer1 ==  "noo" :
         print ("We can do classec")
         answer2 = input("Can I give you the advantages of the classec wash ? \n")
         if answer2 == "yes" :
            print ("1- wash with classec foam")
            print ("2- rience once")
            print ("3- air dry")
            print ("4- It will cost 6$")
            answer3 = input(" Ok or No ?\n")
            if answer3 == "ok" :
                print ("Ok we will do that")
            elif answer3 == "no" :
                print ("Oh no I can’t do anything")    
         elif answer2 == "no" :
            print ("Oh no I can’t do anything")            
         

elif answer == "classec" :
    answer4 = input ("IT will cost 6$ \n")
    if answer4 == "ok" :
         print ("Ok we will do that")
    elif answer4 == "no" :
         print ("Oh no I can’t do anything")     