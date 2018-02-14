x=int(input("Enter a positive number:",))
lst=[]
i=1
while x>=i**2:
     lst.append(i**2)
     i=i+1
print("Choose a number from :",lst)
i=i-2
while x>0:
    a=int(input("player 1:"))
    while a not in lst:
        a=int(input("Enter another number:"))
    x=x-a
    print("Remaining:",x)
    if x==0:
        print("player 1 won")
        break
    while x<lst[i]:
        del lst[i]
        i=i-1
    else:
        b=int(input("player 2:"))
        while b not in lst:
            b=int(input("Enter another number:"))
        x=x-b
        print("Remaining:",x)
        if x==0:
            print("player 2 won")
            break
        while x<lst[i]:
            del lst[i]
            i=i-1           
    
    
