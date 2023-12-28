#include <stdio.h>
#include <stdlib.h>
/*
    15-doWhile-while
loop: vòng lặp
for | do while | while
*/
int main()
{
/*
    int i = 1;

    do{
        printf("\nI Love You %d", i);
        i++;
    }while(i <= 10);
*/
/*
    int a;
    for(;;){
        printf("\nInput a: ");
        scanf("%d", &a);
        if(a == 15){
            break;
        }
    }
*/
/*
    int a;
    do{
        printf("\nInput a: ");
        scanf("%d", &a);
    }while(a != 15);//Đk đúng thì dừng
                    //Đk sai thì làm tiếp
*/
    int i = 1;
    while(i <= 10){//while(true) trong ngôn ngữ khác, while(1==1) trong c
        printf("\nI Love You %d", i);
        i++;
    }
    return 0;
}
