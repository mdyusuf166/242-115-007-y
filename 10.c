#include <stdio.h>

 int isPrime(int num);
 void findPrimesInRange(int start, int end);

int main() {
    int start, end;
    
    // Taking input from user
    printf("Enter two numbers (range): ");
    scanf("%d %d", &start, &end);
    
    // Finding and displaying prime numbers
    findPrimesInRange(start, end);
    
    return 0;
}
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void findPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

