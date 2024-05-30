#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversedStr[100];
    int length, i;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    
    length = strlen(str);

    
    for (i = 0; i < length; i++) {
        reversedStr[i] = str[length - 1 - i];
    }
    reversedStr[length] = '\0';  
    printf("Reversed string: %s\n", reversedStr);

    return 0;
}