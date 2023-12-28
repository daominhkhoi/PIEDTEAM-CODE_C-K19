#include <stdio.h>
#include <stdlib.h>
//  27-checkPrimeV4
int checkPrimeV4(int number);
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
    //output
    int flag = checkPrimeV4(n);
    if(flag == 1){
        printf("\nis prime");
    }else{
        printf("\nisn't prime");
    }
    return 0;
}
int checkPrimeV4(int number){
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
