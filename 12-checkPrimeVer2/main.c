#include <stdio.h>
#include <stdlib.h>
//12-checkPrimeVer2 - không dùng return 0;
int main()
{
    int number;
    printf("Input number: ");
    scanf("%d", &number);

    int isPrime = 1;//1 là true  | 0 là  false
                    //sài phép thử niềm tin
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){//đây là phép thử
                isPrime = 0;//niềm tin biến mất
                break;//dừng loop gần nhất
            }
        }
        if(isPrime == 0){//in ra niềm tin còn hay mất
            printf("\n%d is not prime", number);
        }else{
            printf("\n%d is prime", number);
        }
    }else{
        printf("\n%d is not prime", number);
    }
    return 0;
}
