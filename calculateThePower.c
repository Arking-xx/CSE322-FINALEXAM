#include <stdio.h>

int main() {
    double base, result = 1;
    int exponent, i;

  
    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    
    for (i = 0; i < exponent; ++i) {
        result *= base;
    }

    // Display the result
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}
