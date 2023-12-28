#include <stdio.h>
#include <stdlib.h>
/*
    17-sumPrime
tính tổng số prime từ start đến end
*/
int main()
{
    int start, end, sumPrime = 0;

    printf("\nInput start: ");
    scanf("%d", &start);
    printf("\nInput end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

    for(int number = start; number <= end; number++){
        int isPrime = 1;
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("%5d", number);
                sumPrime += number;
            }
        }
    }

    printf("\nsumPrime = %d", sumPrime);
    return 0;
}
