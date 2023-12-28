#include <stdio.h>
#include <stdlib.h>
//
void checkPrimeV2(int number);
int main()
{
    //input
    int n;
    char buffer;
    do{
        printf("\ninput number: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
    }while(buffer != 10);
    checkPrimeV2(n);
    return 0;
}
void checkPrimeV2(int number){
    //process
    if(number < 2){
        printf("\n%d is not prime", number);//output
    }else{
        int flag = 1;
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){//output
            printf("\n%d is prime", number);
        }else{
            printf("\n%d is not prime", number);
        }
    }
}
