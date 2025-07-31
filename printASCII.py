def main():
    
    A=list(map(int,input().split()))
    ans=[]
    for i in range(len(A)):
        ans.append(chr(A[i]))
    print(ans)
main()

    