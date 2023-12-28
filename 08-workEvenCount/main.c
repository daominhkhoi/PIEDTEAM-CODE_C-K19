#include <stdio.h>
#include <stdlib.h>
/*
tạo project 08-workEvenCount
1.in ra màn hình các số chẵn trong đoạn
2.tính tổng các số lẻ trong đoạn
3.đếm xem có bao nhiêu số trong đoạn
4.đếm xem có bao nhiêu số chẳn trong đoạn
*/
int main()
{
   int start, end;
   int sum = 0;
   int count = 0;
   int countEven = 0;

   printf("Start = ");
   scanf("%d", &start);

   printf("\nEnd = ");
   scanf("%d", &end);
   printf("\n");

   if(start > end){
    int tmp = start;
    start = end;
    end = tmp;
   }
/*
   for(int i = start; i <= end; i++){
    if(i % 2 == 0){
        printf("%d ", i);
    }else{
        sum += i;
    }
   }
   printf("\nTong so le trong doan la: %d", sum);

   for(int i = start; i <= end; i++){
       count++;
       if(i % 2 == 0){
        countEven++;
       }
   }
   printf("\nTong so trong doan la: %d", count);
   printf("\nTong so chan trong doan la: %d", countEven);
*/
//cách của Bro Tân Trần
    for(int i = start;i <= end; i++){
        count++;
        if(i & 1){//lẻ 010
            sum += i;
        }else{//chẳn 000
            printf("%3d,", i);
            countEven++;
        }
    }
    printf("\nTong cac so le la: %d\n", sum);
    printf("\nCo %d so trong doan\n", count);
    printf("\nCo %d so chan trong doan\n", countEven);
    return 0;
}
