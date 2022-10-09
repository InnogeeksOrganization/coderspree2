t=int(input(""));
for i in range(0, t):
    n=int(input(""))
    c=0
    if n==1:
        c+=1
    elif n==2 or n==3: 
        c+=0
    elif (n%2==0) and (n!=2): 
        c+=1
    for i in range(3, int(n**0.5)+1, 2):
        if n%i==0:
            c+=1
    if(c==0):
        print("prime")
    else:
        print("not prime")