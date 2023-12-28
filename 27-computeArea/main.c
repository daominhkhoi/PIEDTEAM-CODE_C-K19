#include <stdio.h>
#include <stdlib.h>
// 27-computeArea
// viết hàm nhận vào 2 cạnh dài rộng
// tính diện tích hình chữ nhật
float computeArea(float width, float heigh);
int main()
{
    float w, h;
    printf("input w: ");
    scanf("%f", &w);

    printf("\input h: ");
    scanf("%f", &h);

    printf("\nArea = %.2f", computeArea(w, h));
    return 0;
}
float computeArea(float width, float heigh){
    float area = width * heigh;
    return area;
}
//làm checkPrime 4 phiên bản
//hint return 1 true 0 false
