#include <stdio.h>
#include <stdlib.h>
//  22-inductiveV2
/*
nhập vào 1 số nguyên dương number >= 1
tính tổng của 1 + 1/3 + 1/6 + ... 1/(1+2+3+...+n)

*/
int main()
{
    int number;
    char buffer;

    do{
        printf("\ninput number: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || number < 1){
            printf("\npls, nhap so nguyen va >= 1");
        }
    }while(buffer != 10 || number < 1);

    int sum = 0;
    float result = 0;
    for(int i = 1; i <= number; i++){
        sum += i;
        result += (float)1/sum;
    }
    printf("\nresult = %.2f", result);
    return 0;
}
