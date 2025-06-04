#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double exp_taylor(double x, int terms) {
    double result = 0.0;
    for (int n = 0; n < terms; n++) {
        result += pow(x, n) / factorial(n);
    }
    return result;
}

int main() {
    double x = 2.0;
    int terms = 10;
    
    double taylor_result = exp_taylor(x, terms);
    double actual = exp(x);
    
    printf("Taylor series approximation (%d terms) of e^%.2f: %.8f\n", 
           terms, x, taylor_result);
    printf("Built-in exp(%.2f): %.8f\n", x, actual);
    printf("Difference: %.8f\n", fabs(actual - taylor_result));
    
    return 0;
}