#include <stdio.h>
#include <stdlib.h>
//  27-checkPrimeV1
void checkPrimeV1(void);
int main()
{
    checkPrimeV1();
    return 0;
}
void checkPrimeV1(void){
    //input
    int number;
    char buffer;
    do{
        printf("\ninput number: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
    }while(buffer != 10);
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
