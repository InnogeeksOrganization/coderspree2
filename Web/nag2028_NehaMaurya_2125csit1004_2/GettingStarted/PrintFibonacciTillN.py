n = int(input(""))
n1, n2 = 0, 1
nth = 0
if n == 1:
   print(n1)
else:
   while n1 < n:
       print(n1)
       nth = n1 + n2
       n1 = n2
       n2 = nth