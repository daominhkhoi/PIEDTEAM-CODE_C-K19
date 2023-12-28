#include <stdio.h>
#include <stdlib.h>
//06-aquadraticEquation
/*
nhập vào 3 số thực đại diện cho a b c
là hệ số của phương trình ax^2 + bx + c = 0
tìm nghiệm của phương trình trên
a^2 => a*a => pow(a, 2);
căn 2 của a => sqrt(a);
căn 5 của a => pow(a, (float)1/5);
*/
int main()
{
    //nhập a b c
    //tính delta b^2 - 4ac
    //xét delta: > < = 0
    float a, b, c;
    printf("\nNhap a: ");
    scanf("%f", &a);

    printf("\nNhap b: ");
    scanf("%f", &b);

    printf("\nNhap c: ");
    scanf("%f", &c);

    if (a == 0){//bx = c = 0
        if(b == 0){//c = 0
            if(c == 0){
                printf("\nPhuong trinh vo so nghiem");
            }else{
                printf("\nPhuong trinh vo nghiem");
            }
        }else{//bx + c = 0 và b != 0
            printf("\nPhuong trinh co 1 nghiem &.2f", -c/b);
        }
    }else{// ax^2 + bx + c = 0
        float delta = b*b - 4*a*c;
        if(delta > 0){
            printf("\nPhuong trinh co 2 nghiem");
            printf("\nx1 = %.2f", (-b + sqrt(delta))/(2*a));
            printf("\nx2 = %.2f", (-b - sqrt(delta))/(2*a));
        }else if(delta == 0){
            printf("\nPhuong trinh co nghiem kep");
            printf("\nx1 = x2 = %.2f", (-b + sqrt(delta))/(2*a));
        }else if(delta < 0){
            printf("\nPhuong trinh vo nghiem");
        }
    }
    return 0;
}
