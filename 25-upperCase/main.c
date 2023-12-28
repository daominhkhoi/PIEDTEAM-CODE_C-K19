#include <stdio.h>
#include <stdlib.h>
//  25-upperCase
/*
nhập vào kí tự thường và biến thành ký tự hoa
*/
int main()
{
    char ch;

    printf("\ninput chu thuong di: ");
    scanf("%c", &ch);
    fflush(stdin);

    if(ch >= 97 && ch <= 122){
        ch -= 32;
    }

    printf("\nCh = %c", ch);
    return 0;
}
