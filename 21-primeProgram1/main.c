#include <stdio.h>
#include <stdlib.h>
//  21-primeProgram1
int main()
{
    int number;
    char buffer;

    while(1 == 1){
        //ép kiểu input
        do{
            printf("\ninput number: ");
            scanf("%d", &number);
            scanf("%c", &buffer);
            fflush(stdin);
            if(buffer != 10){
                printf("Pls, nhap so nguyen !\n");
            }
        }while(buffer != 10);

        // điệu kiện thoát
        if(number == 0){
            break;// return trong bài này đc
        }

        //kiểm tra số vừa nhập
        int flag = 1;
        if(number < 2){
            printf("\n%d khong phai la so nguyen to", number);
        }else{
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                printf("\n%d la so nguyen to", number);
            }else{
                printf("\n%d khong phai la so nguyen to", number);
            }
        }

    }

    return 0;
}
