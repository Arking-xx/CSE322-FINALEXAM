#include <stdio.h>


void decimalToBinary(int decimal, char *binary) {
    int index = 0;
    
   
    if (decimal == 0) {
        binary[index++] = '0';
        binary[index] = '\0';
        return;
    }

  
    while (decimal > 0) {
        binary[index++] = (decimal % 2) + '0';
        decimal /= 2;
    }
    
    
    binary[index] = '\0';

    
    int start = 0, end = index - 1;
    while (start < end) {
        char temp = binary[start];
        binary[start] = binary[end];
        binary[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int decimal;
    char binary[65]; 

   
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

   
    decimalToBinary(decimal, binary);

    
    printf("Binary equivalent: %s\n", binary);

    return 0;
}
