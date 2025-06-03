def sqrt_binary_search(n, precision=1e-10):
    if n < 0:
        raise ValueError("Cannot compute square root of negative number")
    if n == 0 or n == 1:
        return n
    
    low = 0.0
    high = n
    # If n is between 0 and 1, the square root is larger than n
    if n < 1:
        high = 1.0
    
    while high - low > precision:
        mid = (low + high) / 2
        mid_squared = mid * mid
        
        if mid_squared < n:
            low = mid
        else:
            high = mid
    
    return (low + high) / 2