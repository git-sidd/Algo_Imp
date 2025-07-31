def isPrime(num) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def main():
    num = int(input("Enter Num: "))
    if isPrime(num):
        print("Prime")
    else:
        print("Not Prime")

main()
