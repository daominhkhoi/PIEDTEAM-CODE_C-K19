#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float sum = 0;
    char buffer;

    do{
        printf("Input n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
    }while(buffer != 10 || n < 0);

    for(int i = 1; i <= n; i++){
        sum += pow(-1, i) * (float)(2*i)/(2*i + 1);
    }
    printf("\n%.5f", sum);
    return 0;
}
