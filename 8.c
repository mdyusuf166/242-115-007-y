#include <stdio.h>
#include <math.h>


int isArmstrong(int num);
int main() {
    int num;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    
    if (isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");
    
    return 0;
}
int isArmstrong(int num) {
    int original = num, sum = 0, remainder, n = 0;
    
    
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    
    return (sum == original);
}

