#include <stdio.h>
#include <stdlib.h>
//   24-printPattern
/*
nhập vào hight và width
in ra màn hình
vd: hight = 5 và width = 7

*******
*     *
*     *
*     *
*******
*/
int main()
{
    int height, width;
    printf("Input height: ");
    scanf("%d", &height);
    printf("\nInput width: ");
    scanf("%d", &width);

    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){
            if(h == 1 || h == height || w == 1 || w == width){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
