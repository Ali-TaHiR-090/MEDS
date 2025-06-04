#include <stdio.h>
#include <math.h> // For fabs() - absolute value for doubles

double sqrt_binary_search(double n, double precision) {
    if (n < 0) {
        printf("Cannot compute square root of negative number\n");
        return -1; // NaN equivalent would be better but keeping it simple
    }
    if (n == 0 || n == 1) {
        return n;
    }

    double low = 0.0;
    double high = n;
    
    // If n is between 0 and 1, the square root is larger than n
    if (n < 1) {
        high = 1.0;
    }

    while (high - low > precision) {
        double mid = (low + high) / 2;
        double mid_squared = mid * mid;
        
        if (mid_squared < n) {
            low = mid;
        } else {
            high = mid;
        }
    }

    return (low + high) / 2;
}

int main() {
    double numbers[] = {25, 2, 0.25, 10, 0.5};
    double precision = 1e-10;
    
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
        double result = sqrt_binary_search(numbers[i], precision);
        printf("sqrt(%.2f) ≈ %.10f\n", numbers[i], result);
    }
    
    return 0;
}