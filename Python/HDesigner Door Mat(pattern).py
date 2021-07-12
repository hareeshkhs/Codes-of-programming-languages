a= int(input("enter odd positive integer(4<a<101):>>>"))
a=int(a)
b=int(a*3)
c=int((b-3)/2)
#print(c)
m=1
s=3
d=int((a-1)/2)
w=int((b-7)/2)
x=int((b-6)/3)
for i in range(d):
    for j in range(c):
        print("-",end='')
    for k in range(m):
        print(".|.",end='')
    for l in range(c):
        print("-",end='')
    c=c-3
    m=m+2
    print()
for i in range(1):
    for j in range(w):
        print("-",end='')
    print("WELCOME",end='')
    for k in range(w):
        print("-",end='')
    print()
for i in range(d):
    for j in range(s):
        print("-",end='')
    for k in range(x):
        print(".|.",end='')
    for l in range(s):
        print("-",end='')
    s=s+3
    x=x-2
    print()
