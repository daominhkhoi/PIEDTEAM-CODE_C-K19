#include <stdio.h>
#include <stdlib.h>
//  21-printFormat
/*
ép người dùng nhập vào 1 ký tự thuộc chữ thường
sai thì nhập lại

in ra màn hình ký tự đó dưới dạng ký tự, số, octal
*/
int main()
{
    char ch;
    char buffer;
    do{
        printf("\nNhap chu thuong nha: ");
        scanf("%c", &ch);
        scanf("%c", &buffer);
        fflush(stdin);
        if(ch < 97 || ch > 122){
            printf("\nNhap lai di !!!");
        }
    }while(ch < 97 || ch > 122);

    printf("\n%d %c %o", ch, ch, ch);
    return 0;
}
