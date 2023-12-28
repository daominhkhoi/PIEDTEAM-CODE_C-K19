#include <stdio.h>
#include <stdlib.h>
//09-inductiveResult
/*
nhập vào 1 số nguyên n
tính kết quả của 1^n + 2^n + 3^n + ... + n^n
vd: nhập n = 5
tính kết quả của 1^5 + 2^5 + 3^5 + 4^5 + 5^5
*/
int main()
{
    int n;
    int sum = 0;

    printf("\nNhap n: ");
    scanf("%d", &n);

    if(n < 0){
        printf("\nDung co nhap so am Bro!");
        return 0;
    }

    for(int i = 1; i <= n; i++){
       sum += pow(i, n);
    }
    printf("\nKet qua = %d", sum);
    return 0;
}
