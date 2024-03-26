def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)
a=int(input("Enter the Number: "))
print(f"Output: {factorial(a)}")