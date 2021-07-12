#hacker rank Nested Lists
if __name__ == '__main__':
    n=int(input())
    lis1=[]
    lis2=[]
    j=0
    for i in range(n):
        lis1.append([])
        for j in range(1):
            name = input()
            score = float(input())
            lis1[i].append(name)
            lis1[i].append(score)
    #print(lis1)
    a=0
    for k in range(n):
        lis2.append(lis1[a][1])
        a=a+1
    #print(lis2)
    lis2.sort()
    #print(lis2)
    final= [] 
    for num in lis2:
        if num not in final: 
            final.append(num) 
    #print(final)
    sec=final[1]
    #print(final[-2])
    nam=[]
    for b in range(n):
        if lis1[b][1]==sec:
            nam.append(lis1[b][0])
    nam.sort()
    for c in nam:
        print(c)