def count_substring(hari,ha):
    l1=[]
    l1=[lt for lt in hari]
    co=0
    flag=0
    j=0
    c=len(ha)
    for j in range(len(hari)):
        k=0
        cou=0
        #print("j",j)
        m=j+len(ha)
        if m<=len(hari):
            n=m
        else:
            n=len(hari)
        for i in range(j,n):
            #print("i",i)
            #print(l1[i])
            #print(ha[k])
            if l1[i]==ha[k]:
                cou=cou+1
            k=k+1
        #print(j+1,"s turn=",count)
        if cou==len(ha):
            co=co+1
        j=j+1
    return co
string = input("Enter main_string:").strip()
sub_string = input("Enter sub_string:").strip()
result=count_substring(string, sub_string)
print(result)