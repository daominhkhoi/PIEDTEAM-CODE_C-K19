#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, print;
    char buffer;

    do{
        printf("\n input n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
    }while(buffer != 10);

    while(n != 0){
        print = n % 10;
        n = n / 10;
        printf("%d", print);
    }
    return 0;
}
