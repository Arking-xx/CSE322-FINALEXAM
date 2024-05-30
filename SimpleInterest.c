#include <stdio.h>

int main() {
    double principal, rate, time, simpleInterest;

    
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    
    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

  
    simpleInterest = (principal * rate * time) / 100;

    printf("Principal Amount: $%.2lf\n", principal);
    printf("Annual Interest Rate: %.2lf%%\n", rate);
    printf("Time Period: %.2lf years\n", time);
    printf("Simple Interest: $%.2lf\n", simpleInterest);

    return 0;
}