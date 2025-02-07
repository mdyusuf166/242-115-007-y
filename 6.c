#include<stdio.h>

int isPalindrome(int n);
int main(){
        int num;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
    
    return 0;
}




int isPalindrome(int n) {
    int original = n, reversed = 0, remainder;
    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}