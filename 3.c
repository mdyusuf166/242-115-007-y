#include <stdio.h>

int main() {
    int primeNum;
    printf("Enter Number:");
    scanf("%d",&primeNum);
    if(primeNum == 7){
        printf("Prime");
    
    }
    else{
         printf(" not a prime please input your number ,,Enter Number:");
         scanf("%d",&primeNum);
        
    }



    return 0;
}
