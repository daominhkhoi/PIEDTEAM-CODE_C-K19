#include <stdio.h>
#include <stdlib.h>
//02-ifElse
//cấu trúc phân nhánh
int main()
{
    /*
    if(conditional){
        command block;
    }else if(conditional){
        command block;
    }
    //nếu điều kiện này đúng thì làm hành động này đi, còn nếu điều kiện này đúng thì làm hành động này đi
    */
    int car = 5;
    printf("\nSai Gon");
    printf("\nCao toc Lien Khuong");
    //gặp 1 biển báo
    if (car >= 7){
        printf("\nPren");
    }else if(car == 7){
        printf("\nSacom");
    }else{
        printf("\nMimosa");
    }
    printf("\nDalat");

    //nói riêng về điều kiện
    //comparision operator: toán tử điều kiện
    // == so sánh bằng
    // != so sánh không bằng
    // > < >= <=
    // mathetic operator: toán tử toán học
    // + - * / %
    //toán tử tăng
    int a = 5;
    a = a + 2;//7
    a += 2;//9
    a = a + 1;//10
    a += 1;//11
    a++;//12
    a+=3;//15
    a = a + 3;//18
    a--;//17
    //II - logical operator: toán tử logic
    //muốn đi bar thì cần gì
    //tuổi từ 18 trở lên
    //money trên 300
    int age = 18;
    int money = 10;

    //cách 1
    /*if(age >= 18){
        if(money > 300){
            printf("\nWelcome");
        }else{
            printf("\nCut");
        }
    }else{
    printf("\nCut");
    }
    */

    //cách 2
    if(age >= 18 && money > 300){ // "||": or
        printf("\nWelcome");      // "&&": and
    }else{
        printf("\nCut");
    }
    // &&: and: tìm false, thấy false là chốt false
    //          không tìm đc thì true
    // ||: or : tìm true, thấy true là chốt true
    //          không tìm đc thì false

    a = 9;
    int b = 0;

    if (a==10 && b++ > 2){
        printf("\nTrue a = %d, b = %d", a, b);
    }else{
        printf("\nFalse a = %d, b = %d", a, b);
    }




    return 0;
}
