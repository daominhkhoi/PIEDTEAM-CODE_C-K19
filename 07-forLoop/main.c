#include <stdio.h>
#include <stdlib.h>
//07-forLoop: vòng lặp for
int main()
{
    /*
    for(khởi đầu; điều kiện thoát; bước nhảy){
        khối lệnh - command block
    }
    */

    for(int i = 1; i <= 10; i++){
        printf("\n%d Nguyen The Hoang", i);
    }//blockScope

    //bug: printf("\n %d ", i);

    return 0;
}
