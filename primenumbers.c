#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main() {
    int num;

   
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; 
    if (num % 2 == 0) return false; 

    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}
