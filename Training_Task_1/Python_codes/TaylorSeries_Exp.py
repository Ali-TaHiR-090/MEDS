import math

def exp_taylor(x, terms=10):
    result = 0.0
    for n in range(terms):
        result += x**n / math.factorial(n)
    return result

# Example usage
x = 2.0
print(f"Taylor series approximation (10 terms) of e^{x}: {exp_taylor(x)}")
print(f"Built-in math.exp({x}): {math.exp(x)}")
print(f"Difference: {abs(math.exp(x) - exp_taylor(x))}")