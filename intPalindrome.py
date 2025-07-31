def main():
    num=int(input("enter the number:"))
    numstr=str(num)
    if(numstr==numstr[::-1]):
        print("num:",numstr)
        print("Reversed:",numstr[::-1])
        print("Palindrome")
    else:
        print("num:",numstr)
        print("Reversed:",numstr[::-1])

        print("Not Palindrome")

main()