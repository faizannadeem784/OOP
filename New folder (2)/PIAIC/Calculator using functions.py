def Cal_INFO():
    print("\t\t*****Welcome to my calculator*****")
    print("\t\t******_____FAIZAN NADEEM_____*****")
    print("\n\tPress 1. for Addition")
    print("\n\tPress 2. for subtraction")
    print("\n\tPress 3. for Multiplication")
    print("\n\tPress 4. for Division")
    print("\n\tPress 5. for Modulos")
    print("\n\tPress 6. for Square")
    print("\n\tPress 7. for Cube")
    print("\n\tPress 8. for Table")
    print("\n\tPress 9. for Factorial")
def Addition(num1=0,num2=0):
    sum=num1+num2
    print("The Sum of ",num1," and ",num2,"is:",sum)
def Subtraction(num1=0,num2=0):
    subtraction=num1-num2
    print("The Subtraction of ",num1," and ",num2,"is:",subtraction)
def Multiplication(num1=0,num2=0):
    multiplication=num1*num2
    print("The Multiplication of ",num1," and ",num2,"is:",multiplication)
def Division(num1=0,num2=0):
    division=num1//num2
    print("The Division of ",num1," and ",num2,"is:",division)
def modulos(a=0,b=0):
    x=a
    y=b
    modulo =  x % y
    print("Modulo =\t",modulo)
def square(a=0):
    x=a
    square = x*x
    print("Square of number you entered",x," is = ",square)
def cube(a=0):
    x=a
    cube = x*x*x
    print("Cube of number you entered",x," is = ",cube)


def Table(a=0,b=0,c=0):
    num=a
    start=b
    end=c
    for start in range(start,end+1):
        print(num,"*",start,"=",start*num)
def Factorial(a=0):
    number=a
    Factorial=number
    for number in range(number,1,-1):
        print(Factorial,"*",number-1,"=",Factorial*(number-1))
        Factorial*=number-1
print("The Factorial of the number is",Factorial)        
Cal_INFO()
x=int(input("Enter your choice here"))
if(x==1):
    num1=int(input("Enter the 1st number:"))
    num2=int(input("Enter the 2nd number:"))
    Addition(num1,num2)
elif(x==2):
    num1=int(input("Enter the 1st number:"))
    num2=int(input("Enter the 2nd number:"))
    Subtraction(num1,num2)
elif(x==3):
    num1=int(input("Enter the 1st number:"))
    num2=int(input("Enter the 2nd number:"))
    Multiplication(num1,num2)
elif(x==4):
    num1=int(input("Enter the 1st number:"))
    num2=int(input("Enter the 2nd number:"))
    Division(num1,num2)
elif(x==5):
    x = int(input("Enter a number for divisor=\t"))
    y = int(input("Enter a number for divident= \t")) 
    modulos(x,y)
elif(x==6):
    x = int(input("Enter a number for taking a square=\t"))
    square(x)
elif(x==7):
    x = int(input("Enter a number for taking a cube=\t"))
    cube(x)
elif(x==8):
    num=int(input("Enter the number of the table:"))
    start=int(input("Enter the number of the table where you want to start"))
    end=int(input("Enter the number of the table where you want to terminate the table:"))
    Table(num,start,end)
elif(x==9):
    number=int(input("Enter the number of the Factorial:"))
    Factorial(number)

else:
    print("You Enter Invalid number")
