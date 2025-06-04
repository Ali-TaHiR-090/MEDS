from math import factorial


num = input("Enter a number to find its square root: ")
num = float(num)
if num < 1: 
    sqrt_approx = 1 + (num - 1)/2 - (num - 1)**2/8 + (num - 1)**3/16 - 5*(num - 1)**4/128
else:
    a = 1
    while True:
        if a ** 2 < num:
            a += 1
            print(f'a = {a}, a^2 = {a ** 2} ---> {num}')
        else:
            break
    a -= 1
    x = num / (a ** 2)
    sqrt_approx = a + (x) / (2 * a) + (x) ** 2 / (8 * a ** 3)







print(f"Approximate square root of {num} using Taylorseries: {sqrt_approx}")
# Calculate the actual square root for comparison
actual_sqrt = num ** 0.5
print(f"Actual square root of {num}: {actual_sqrt}")

