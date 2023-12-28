#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char buffer;

    do{
        printf("\ninput n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
    }while(buffer != 10);

    int count = 0;
    int test;

    while(n != 0){
        test = n % 10;
        n = n / 10;
        int flag = 1;
        if(test >= 2){
            for(int i = 2; i <= test - 1; i++){
                if(test % i == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                count++;
            }
        }
    }
    printf("\n%d", count);
    return 0;
}













/*
int n;
    char buffer;

    do{
        printf("\ninput n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10){
            printf("\ninput again !");
        }
    }while(buffer != 10);

    int test;
    int count = 0;

    while(n != 0){
        test = n % 10;
        n = n / 10;
        int flag = 1;
        if(test >= 2){
            for(int i = 2; i <= test - 1; i ++){
                if(test % i == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                count++;
            }
        }
    }
    printf("\n%d", count);
*/
