#include <stdio.h>
#include <stdlib.h>
//08-countEven
/*
nhập vào 2 số nguyên lần lượt là start và end
in ra màn hình các số trong đoạn từ start  đến end
- mô tả:
    nhap start: -2
    nhap end: 6

    -2 -1 0 1 2 3 4 5 6

*/
int main()
{
    int start, end;

    printf("Start = ");
    scanf("%d", &start);

    printf("\nEnd = ");
    scanf("%d", &end);

    if(start>end){//khi nhập cà chớn
        int tmp=start;
        start=end;
        end=tmp;
    }

    for(int i = start; i<=end; i++){
        printf("%5d", i);
    }

    //tính tổng các số có trong đoạn trên
    int sum = 0;
    for(int i = start; i<=end; i++){
        sum += i;
    }
    printf("\nSum = %d", sum);
    return 0;
}
/*
tạo project 08-workEvenCount
in ra màn hình các số chẵn trong đoạn
tính tổng các số lẻ trong đoạn
đếm xem có bao nhiêu số trong đoạn
đếm xem có bao nhiêu số chẳn trong đoạn
xài if
*/
