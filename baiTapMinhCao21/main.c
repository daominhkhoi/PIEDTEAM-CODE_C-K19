#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum = 0;
    char buffer;

    do{
        printf("\ninput n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
    }while(buffer != 10 || n < 0);

    for(int i = 1; i <= n; i++){
        sum += pow(-1, i) * i;
    }
    printf("%d", sum);
    return 0;
}
