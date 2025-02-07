#include <stdio.h>

int main() {
    int p, q, r;

    
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &p, &q, &r);

    // Triangle validity condition
    if (p + q > r && p + r > q && q + r > p) {
        printf("Valid Triangle\n");
    } else {
        printf("Invalid Triangle\n");
    }

    return 0;
}
