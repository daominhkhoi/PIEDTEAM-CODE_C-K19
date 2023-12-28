#include <stdio.h>
#include <stdlib.h>
/*
    18-timeCalculation
nhập vào một số nguyên đại diện cho s "giây"
từ s "giây" quy ra giờ:phút:giây
*/
int main()
{
    int s;
    int m = 0;
    int h = 0;

    printf("\nInput s: ");
    scanf("%d", &s);

    if(s > 60){
        m = s / 60;
        s = s % 60;
        if(m > 60){
            h = m / 60;
            m = m % 60;
        }
        printf("\n%02d:%02d:%02d", h, m, s);
    }else{
        printf("\n 00:00:%02d", s);
    }
    return 0;
}
