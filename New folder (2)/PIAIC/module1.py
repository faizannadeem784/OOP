num=int(input("Enter the number of the table:")
start=int(input("Enter the number of the table where you want to start:"))
end=int(input("Enter the number of the table where you want to terminate:"))
for start in range(start,end+1):
    print(num,"*",start,"=",start*num)