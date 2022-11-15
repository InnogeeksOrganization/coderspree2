z=""
for i in range(0, 5):
    for j in range(0, 5):
        if((i==4 or i==0)and(j>=0 or j<=4) or (i+j==4) ):
            z+="*"
        else:
            z+=" "
    z+="\n"
print(z)