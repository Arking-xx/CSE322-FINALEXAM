#include <stdio.h>

int main() {
    int n, i, sum = 0;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

   
    if (n <= 0) {
        printf("Please enter a positive integer for the number of elements.\n");
        return 1; 
    }

    int arr[n]; 

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

   
    for (i = 0; i < n; ++i) {
        sum += arr[i];
    }

    
    printf("Sum of the elements: %d\n", sum);

    return 0; 
}
