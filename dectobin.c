#include <stdio.h>

int main() {
    int x, binary[32], i = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    int isNegative = x < 0;
    if (isNegative) x = -x;
    while (x > 0) {
        binary[i++] = x % 2;
        x /= 2; 
    }
    printf("Binary: ");
    if (isNegative) printf("-");
    if (i == 0) printf("00000000"); // Handle zero
    else {
        for (int j = 8 - i; j > 0; j--) printf("0"); // Add leading zeros
        while (i--) printf("%d", binary[i]); // Print significant bits
    }
    printf("\n");
    return 0;
}
