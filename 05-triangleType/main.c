#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    if(a+b > c && b+c > a && a+c > b){
        if(a==b || b==c || c==a){
            if(a==b && b==c){
                printf("\na,b,c tao thanh tam giac deu");//tam giac deu
            }else if(a*a + b*b == c*c ||
              b*b + c*c == a*a ||
              a*a + c*c == b*b){
                printf("\na,b,c tao thanh tam giac vuong can");//vuong can
            }else{
                printf("\na,b,c tao thanh tam giac can");//tam giac can
            }
        }else if(a*a + b*b == c*c
                 || b*b + c*c == a*a
                 || a*a + c*c == b*b){
                printf("\na,b,c tao thanh tam giac vuong");//tam giac vuong
        }else printf("\na,b,c tao thanh tam giac  thuong");//tam giac thuong
    }else{
        printf("\na,b,c khong the tao thanh tam giac");//khong the tao thanh tam giac
    }
    return 0;
}
