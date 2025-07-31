def main():
    arr=[-2,1,-3,4,-1,2,1,-5,4]
    maxend=arr[0]
    res=arr[0]

    for i in range(len(arr)):
        maxend=max(maxend+arr[i],arr[i])
        res=max(maxend,res)
    print("res:",res)

main()