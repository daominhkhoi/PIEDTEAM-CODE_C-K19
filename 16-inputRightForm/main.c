#include <stdio.h>
#include <stdlib.h>
//16-inputRightForm
/*
ép người dùng nhập số nguyên đích thực, sai là chửi ép nhập lại

12 oke
-15 oke
17.6 chửi, ép nhập lại
12a chửi ép nhập lại
*/
int main()
{
    int number;
    char ch;

    do{
        printf("\nNhap so nguyen di: ");
        scanf("%d", &number);
        scanf("%c", &ch);//hứng phần dư đó
        fflush(stdin);//xoá phần còn lại
        if(ch != 10){
            printf("\nDo ku know input integer!!!");
        }
    }while(ch != 10);
    return 0;
}

