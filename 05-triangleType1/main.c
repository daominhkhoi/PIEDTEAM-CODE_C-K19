#include <stdio.h>
#include <stdlib.h>
//05-triangleType
/*nhập vào 3 số nguyên là a b c
kiểm tra xem a b c có tạo thành tam giác không
nếu có thì là tam giác gì?
*/
int main()
{
    int a, b, c;

    printf("\nNhap a: ");
    scanf("%d",&a);

    printf("\nNhap b: ");
    scanf("%d",&b);

    printf("\nNhap c: ");
    scanf("%d",&c);

    //nếu code chạy đến đây nghĩa là a b c đã có giá trị
    //kiểm tra xem a b c có tạo thành tam giác  không
    //là tam giác
    if(a + b > c &&
       b + c > a &&
       a + c > b){
        if(a == b ||
           b == c ||
           a == c){
            if(a == b &&
               b == c){
                printf("\nTam giac deu");
            }else if(a*a + b*b == c*c ||
                     b*b + c*c == a*a ||
                     a*a + c*c == b*b){
                printf("\nTam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else if(a*a + b*b == c*c ||
                 b*b + c*c == a*a ||
                 a*a + c*c == b*b){
            printf("\nTam giac vuong");
        }else{
            printf("\nTam giac thuong");
        }
    }else{
        printf("\nKhong la tam giac");
    }
    return 0
}
