#include <stdio.h>
#include <stdlib.h>
/*
    17-sumPrime
tính tổng số prime từ start đến end
*/
int main()
{
    int start, end;
    int sum = 0;

    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

    int isPrime;
    for(int number = start; number <= end; number++){
        isPrime = 1;
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                sum = sum + number;
            }
        }
    }
    printf("\nResult is = %d", sum);
    return 0;
}
