#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, print;
    char buffer;


    do{
        printf("Input n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
    }while(buffer != 10 || n < 0);

    for(; n != 0;n = n / 10){
        print = n % 10;
        printf("%d", print);
    }

    return 0;
}
