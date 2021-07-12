def print_rangoli(n):
    #n=int(input())
    s=n*2-1
    s1=int(s/2) 
    s2=s+s-1
    s3=int((s2-1)/2)
    s4=1
    s5=int((s2-3)/2)
#print(s,s1,s2,s3,s4,s5)
    f3,f4,f5=s3,s4,s5
    co=0
    for i in range(1,s1+1):
        n1=n
        for j in range(f3):
            print("-",end="")
        for k in range(1,f4+1):
            print(chr(96+n1),"-",sep="",end="")
            if k<i:
                n1=n1-1
            else:
                n1=n1+1
            co=k
        for l in range(1,f5+1):
            print("-",end="")
        f3=f3-2
        f4=f4+2
        f5=f5-2
        print()
#print(s,s1,s2,s3,s4,s5)
    n2=n
    n3=n
    for m in range(s2):
        if m%2==0:
            print(chr(96+n2),sep="",end="")
            n3=n3-1
            if n3>=1:
                n2=n2-1
            else:
                n2=n2+1
        else:
            print("-",sep="",end="")
    print()
#print(k%2,k/2)
#print(s,s1,s2,s3,s4,s5,co,f4)
    a2=2
    a3=1
    a4=1
    for i in range(1,s1+1):
        n4=n
        for j in range(a2):
            print("-",end="")
        for k in range(1,co+1):
            print(chr(96+n4),"-",sep="",end="")
            num=((co/2)+0.5)
            if k<num:
               n4=n4-1
            else:
               n4=n4+1
        for l in range(a4):
            print("-",end="")
        a4=a4+2
        a2=a2+2
        co=co-2
        print()
if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)