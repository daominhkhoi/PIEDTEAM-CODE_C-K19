#include <stdio.h>
#include <stdlib.h>
//04-compare3Number
/*
nhập từ bàn phím 3 số nguyên
lần lượt là a, b, c

nhiệm vụ: xuất ra màn hình tên biến có giá trị lớn nhất

mô tả phần mềm:
nhap a: 20
nhap b: 20
nhap c: 20

a,b,c bằng nhau

a lớn nhất (a > b && a > c)
a,b lớn nhất (a == b && a > c)
a,c lớn nhất (a == c && a > c)

b lớn nhất (b > a && b > c)
b,c lớn nhất (b == c && b > a)

c lớn nhất (c > a && c > b)

a,b,c bằng nhau (a == b && b == c)
*/
int main()
{
    int a;
    int b;
    int c;
    printf("Number a = ");
    scanf("%d", &a);
    printf("Number b = ");
    scanf("%d", &b);
    printf("Number c = ");
    scanf("%d", &c);
    if (a>b&&a>c){
        printf("\na is the largest");
    }else if (a==b&&a>c){
        printf("\na and b is the largest");
    }else if (a==c&&a>b){
        printf("\na and c is the largest");
    }else if (b>a&&b>c){
        printf("\nb is largest");
    }else if (b==c&&b>a){
        printf("\nb and c is the largest");
    }else if (c>a&&c>b){
        printf("\nc is largest");
    }else{
        printf("\na,b,c are equal");
    }
    return 0;
}
