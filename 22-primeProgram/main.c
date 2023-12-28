#include <stdio.h>
#include <stdlib.h>
//  22-primeProgram
int main()
{
    int number;
    char buffer;

    do{
        printf("\nInput Number: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer == 10){
            int isPrime = 1;
            if(number >= 2){
                for(int i = 2; i <= number - 1; i++){
                    if(number % i == 0){
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime == 0){
                    printf("%d is not prime\n", number);
                }else{
                    printf("%d is prime\n", number);
                }
            }else{
                printf("%d is not prime\n", number);
            }
        }
    }while(number != 0 || buffer != 10);
    return 0;
}
