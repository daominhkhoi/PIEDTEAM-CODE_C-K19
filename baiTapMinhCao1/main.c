#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, test, count = 0;
    char buffer;
    do{
        printf("Input n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
    }while(buffer != 10 || n < 0);
    while(n != 0){
        test = n % 10;
        n = n / 10;
        int isPrime = 1;
        if(test >= 2){
            for(int i = 2; i <= test - 1; i++){
                if(test % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                count++;
            }
        }
    }
    printf("\n%d", count);
    return 0;
}
