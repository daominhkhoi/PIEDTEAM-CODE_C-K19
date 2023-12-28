#include <stdio.h>
#include <stdlib.h>
//  23-inductiveV2
int main()
{
    int n;
    char buffer;

    do{
        printf("\nPls, input n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || n < 1){
            printf("\nPls, n phai la so nguyen va n >= 1");
        }
    }while(buffer != 10 || n < 1);

    int mama = 0;//mama là morther AKA mẫu
    float sum = 0;
    for(int i = 1; i <= n; i++){
        mama +=i;
        sum += 1/(float)mama;
    }
    printf("\nResult = %.2f", sum);
    return 0;
}
