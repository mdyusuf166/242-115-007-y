#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary);
int main() {
    long long binary;
    

    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    
    printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
    
    return 0;
}
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, remainder;
    
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    
    return decimal;
}