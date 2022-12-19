import random
import emoji
print("Welcome  to Snake("+emoji.emojize(":snake:")+
      ") water("+emoji.emojize(":sweat_droplets:")+
      ") and gun(" + emoji.emojize(u"\U0001F52B")+
      ") game ")
numberofchances = 10
print("You will have ", numberofchances, " number of chances")
print("Enter\n1. for Snake\n2. for water\n3. for gun\n")
a = [1, 2, 3]
me = 0
com = 0
i = 1
while(i<=10):
    b = random.choice(a)
    x = int(input("Your Turn : "))
    print("Computers Turn : ",b)
    if(x>3):
        print("Wrong input by you!!")
    if x == b:
        print("Tie!!!!")
    elif x == 1:
        if b == 2:
            print("Score !!")
            me += 1
        elif b == 3:
            print("Computer Wins!!!")
            com += 1
    elif x == 2:
        if b == 3:
            print("Score !!")
            me +=1
        elif b == 1:
            print("Computer Wins!!!")
            com += 1
    elif x == 3:
        if b == 1:
            print("Score !!")
            me += 1
        elif b == 2:
            print("Computer Wins!!!")
            com += 1
    i += 1

print("Game Over "
      "your score ", me," , "
      "Computer's score = ", com)
if(me > com):
    print("CONGRATULATION!! YOU WIN THE GAME" + emoji.emojize(":party_popper:")*3)
else:
    print("YOU LOOSE!!!" + emoji.emojize(":pleading_face:")*3)
