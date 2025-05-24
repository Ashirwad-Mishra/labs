y = int (input("Enter the year: "))
n = int (input("Enter the month number: "))
if (y%100 != 0 and y%4==0) or (n%400==0):
    if (n == 1 or n == 3 or n == 5 or n==7 or n == 8 or n == 10 or n == 12):
        print ("The ",n,"th month has ",31," days.")
    elif(n==2):
        print ("The ",n,"th month has ",29," days.")
    else:
        print ("The ",n,"th month has ",30," days.")
else :
    if (n == 1 or n == 3 or n == 5 or n==7 or n == 8 or n == 10 or n == 12):
        print ("The ",n,"th month has ",31," days.")
    elif(n==2):
        print ("The ",n,"th month has ",28," days.")
    else:
        print ("The ",n,"th month has ",30," days.")