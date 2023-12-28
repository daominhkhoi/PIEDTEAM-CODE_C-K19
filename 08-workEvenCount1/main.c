#include <stdio.h>
#include <stdlib.h>
/*
tạo project 08-workEvenCount1
1.in ra màn hình các số chẵn trong đoạn
2.tính tổng các số lẻ trong đoạn
3.đếm xem có bao nhiêu số trong đoạn
4.đếm xem có bao nhiêu số chẳn trong đoạn
*/
int main()
{
    int start, end;

    printf("\nNhap start: ");
    scanf("%d", &start);

    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start>end){//nếu nhập cà chớn thì fix cho ngta
        int tmp = start;
        start = end;
        end = tmp;
    }
    //in ra màn hình các số chẵn trong đoạn
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            printf("%5d",i);
        }
    }
    //tính tổng các số lẻ trong đoạn
    int sumOdd = 0;
    for(int i = start; i <= end; i++){
        if(i % 2 != 0){
            sumOdd += i;
        }
    }
    printf("\nsumOdd = %d", sumOdd);

    //đếm xem có bao nhiêu số trong đoạn
    int count = 0;

    for(int i = start; i <= end; i++){
        count++;
    }
    printf("\ncount = %d", count);

    //có bao nhiêu số chẵn trong đoạn
    int countEven = 0;

    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            countEven++;
        }
    }
    printf("\ncountEven = %d", countEven);

    return 0;
}
