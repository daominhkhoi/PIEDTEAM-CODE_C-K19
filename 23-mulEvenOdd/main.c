#include <stdio.h>
#include <stdlib.h>
//  23-mulEvenOdd
/*
nhập vào số nguyên n >= 2
tính tích các số chẵn và tích các số lẽ
trong đoạn từ 1 tới n - 1

vd: nhập n = 5
tích các số chẵn = 8
tích các số lẽ = 3
*/
int main()
{
    int number;
    char buffer;
    int hasEven = 0, hasOdd = 0;
    do{
        printf("\ninput number: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || number < 2){
            printf("\nTry again !");
        }
    }while(buffer != 10 || number < 2);

    int mulOdd = 1;
    int mulEven = 1;

    for(int i = 1; i <= number - 1; i++){
        if(i % 2 == 0){
            mulEven *= i;
            hasEven = 1;
        }else{
            mulOdd *= i;
            hasOdd = 1;
        }
    }

    mulEven *= hasEven;
    mulOdd *= hasOdd;

    printf("\ntich cac so chan: %d", mulEven);
    printf("\ntich cac so le: %d", mulOdd);
    return 0;
}
