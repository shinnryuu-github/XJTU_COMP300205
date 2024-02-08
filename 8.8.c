#include <stdio.h>
#include <ctype.h>

int main() {
    char inputString[100];
    int i;
    printf("input string:  ");
    scanf("%[^\n]", inputString);
    
    int upperCaseCount = 0, lowerCaseCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;
    for (i = 0; inputString[i] != '\0'; i++) {
        if (isupper(inputString[i])) {
            upperCaseCount++;
        } else if (islower(inputString[i])) {
            lowerCaseCount++;
        } else if (isspace(inputString[i])) {
            spaceCount++;
        } else if (isdigit(inputString[i])) {
            digitCount++;
        } else {
            otherCount++;
        }
    }
    
    printf("\nupper case:%-5d lower case:%-5d space:%-5d digit:%-5d other:%-5d\n", 
           upperCaseCount, lowerCaseCount, spaceCount, digitCount, otherCount);
    return 0;
}

