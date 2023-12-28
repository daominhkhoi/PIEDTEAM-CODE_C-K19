#include <stdio.h>
#include <stdlib.h>
/*
    18-timeCalculation
*/
int main()
{
    int h, m, s;

    printf("\nInput s: ");
    scanf("%d", &s);

    h = s / 3600;
    s = s % 3600;
    m = s / 60;
    s = s % 60;

    printf("\n %02d:%02d:%02d", h, m, s);
    return 0;
}
