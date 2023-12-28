#include <stdio.h>
#include <stdlib.h>
//
int checkPrimeV3(void);
int main()
{
    //output
    int flag = checkPrimeV3();
    if(flag == 1){
        printf("\nis prime");
    }else{
        printf("\nisn't prime");
    }
    return 0;
}
int checkPrimeV3(void){
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
    int yes = 1;
    int no = 0;

    if(number < 2){
        return no;
    }else{
        int flag = 1;
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            return yes;
        }else{
            return no;
        }
    }
}
