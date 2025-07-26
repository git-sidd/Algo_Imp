from collections import Counter

comon="siddhesh"
s1="sakshi"

comon=Counter(comon)
s1=Counter(s1)

comon=comon&s1

print("comon : ",comon)

ans=[]

for key,val in comon.items():
    ans.extend([key]* val)

print(ans)