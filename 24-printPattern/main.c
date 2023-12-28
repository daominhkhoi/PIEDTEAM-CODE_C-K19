#include <stdio.h>
#include <stdlib.h>
//  24-printPattern
int main()
{
    int height, width;
    printf("Input height: ");
    scanf("%d", &height);
    printf("\nInput width: ");
    scanf("%d", &width);

    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){
            if(h == 1 || h == height){
                printf("* ");
            }else if(w == 1 || w == width){
                printf("* ");
            }else if(w >= 2 && w < width){
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

