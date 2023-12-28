#include <stdio.h>
#include <stdlib.h>
//10-factorial
/*
nhập vào n
tính n!
vd: nhập n = 5
tính 5! = 120
120 là 1*2*3*4*5
*/
int main()
{
    int n;
    int result = 1;//initialValue: giá trị khởi tạo

    printf("\nNhap n = ");
    scanf("%d", &n);

    if(n < 0){
        printf("\nDung co nhap so am bro!");
        return 0;
    }

    for(int i = 1; i <= n; i++){
        result = result  * i;
    }
    printf("\nResult = %d", result);
    return 0;
}
