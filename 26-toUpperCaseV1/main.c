#include <stdio.h>
#include <stdlib.h>

//  26-toUpperCaseV1
void toUpperCaseV1(void);// khai báo
int main()//hàm main là hàm loại 3
{
    toUpperCaseV1();//call
    return 0;
}
void toUpperCaseV1(void){//build
    //input
    char ch;
    printf("\ninput char: ");
    scanf("%c", &ch);
    fflush(stdin);
    //process
    if(ch >= 97 && ch <= 122){
        ch -= 32;
    }
    //output
    printf("\nky tu: %c", ch);
}
