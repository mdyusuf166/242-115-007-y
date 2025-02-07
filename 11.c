#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int original = num, sum = 0, remainder, n = 0;
    
    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    
    // Compute sum of nth powers of digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    
    return (sum == original);
}

int main() {
    int num;
    
    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Checking and displaying result
    if (isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");
    
    return 0;
}
