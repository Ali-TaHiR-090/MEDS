#include <stdio.h>
#include <math.h>

int main() {
    while (1) {    
        float num;
        printf("Enter a number to find its square root: ");
        scanf("%f", &num);
        if (num < 0) {
            printf("Negative numbers do not have real square roots.\n");
            return 0;
        }
        float sqrt_approx;
        if (num < 1) {
            sqrt_approx = 1 + (num - 1)/2 - pow(num - 1, 2)/8 + pow(num - 1, 3)/16 - 5*pow(num - 1, 4)/128;
            printf("The square root of %f is approximately %f\n", num, sqrt_approx);
        } else {
            int a = 1;
            while (1) {
                if (a * a < num) {
                    a += 1;
                    printf("a = %d, a ^ 2 = %d --> %f\n", a, a * a, num);
                } else {
                    break;
                }
            }
            a -= 1;
            float x = num / (a * a);
            sqrt_approx = a + (x) / (2 * a) + pow(x, 2) / (8 * pow(a, 3));
        }
        printf("The square root of %f is approximately %f\n", num, sqrt_approx);
        printf("The actual square root of %f is %f\n", num, sqrt(num));
    }
    return 0;
}