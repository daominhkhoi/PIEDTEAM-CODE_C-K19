#include <stdio.h>
#include <stdlib.h>
//  20-sumAllElement
/*
nhập vào number là 1 số nguyên dương

tính tổng các số thành phần của số đó

number = 1234
result = 10

number = 3254
result = 14

hint: hãy dùng / %
*/
int main()
{
    int number;
    char buffer;
    int result = 0;

    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || number < 0){
            printf("\nPls input again");
        }
    }while(buffer != 10 || number < 0);

    /* //cách của Ân
    while(number != 0){
        result += number % 10;
        number = number / 10;
    }
    */

    for(; number != 0;number = number / 10){
        result += number % 10;
    }

    printf("\nResult = %d", result);
    return 0;
}
