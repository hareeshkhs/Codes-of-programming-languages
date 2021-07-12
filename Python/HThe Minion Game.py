#HackerRank Answer
def minion_game(s):
    vowels = 'AEIOU'
    kevsc = 0
    stusc = 0
    for i in range(len(s)):
        if s[i] in vowels:
            kevsc += (len(s)-i)
        else:
            stusc += (len(s)-i)

    if kevsc > stusc:
        print ("Kevin",kevsc)
    elif kevsc < stusc:
        print ("Stuart",stusc)
    else:
        print ("Draw")

if __name__ == '__main__':
    s = input()
    minion_game(s)

#MY Answer
def minion_game(na):
    stu="Stuart"
    kev="Kevin"
    st=[]
    key1=[]
    key2=[]
    s1=len(na)
    ka=0
    ii=0
    vow,con=0,0
    def isVowel(ch): 
        return (ch == 'A' or ch == 'E' or
                ch == 'I' or ch == 'O' or
                ch == 'U') 
    for j in range(s1):
        for i in range(ka,s1):
            key1.append(na[i])
            stri=''.join(key1)
            key2.append(stri)
        st.clear()
        key1.clear()
        ka=ka+1
    #print(key2)
    s2=len(key2)
    #print(s2)
    for i in range(s2):
        str1=key2[i]
        #print(str1)
        #print(str1[0])
        if isVowel(str1[0])==True:
            vow=vow+1
        else:
            con=con+1
    if con>vow:
        print(stu,con)
    elif vow>con:
        print(kev,vow)
    else:
        print("Draw")

if __name__ == '__main__':
    s = input()
    minion_game(s)