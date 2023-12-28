#include <stdio.h>
#include <stdlib.h>
/*
    19perfectSquare
nhập vào số nguyên (dương) number
kiểm tra số đó có phải số chính phương không ?

một số nếu căn 2 mà được số nguyên thì gọi là
số chính phương

number = 7

number = 9

number = 15

*/
int main()
{
    int number;
    char buffer;

    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &buffer);//hứng phần dư
        fflush(stdin);//xoá các phần dư còn lại
        if(buffer != 10 || number < 0){
            printf("\nNhap lai di !!!");
        }
    }while(buffer != 10 || number < 0);

    if(sqrt(number) == (int)sqrt(number)){
        printf("\nSo chinh phuong");
    }else{
        printf("\nKhong la so chinh phuong");
    }
    return 0;
}
