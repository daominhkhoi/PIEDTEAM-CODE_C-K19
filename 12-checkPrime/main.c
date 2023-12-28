#include <stdio.h>
#include <stdlib.h>

/*
    12-checkPrime
nhập vào số nguyên number
kiểm tra number có phải là số nguyên tố không?
số nguyên tố: là số chia hết cho 1 và chính nó
----------------
bước 1: nếu < 2 chắc chắn ko phải snt
còn nếu >= 2 thì có thể là số nguyên tố
----------------
bước 2: nếu >=2 thì mình kiểm tra thêm
số nguyên tố: là số chia hết cho 1 và chính nó

    chứng minh number ko phải là số nguyên tố
chạy kiểm tra xem number chia hết cho số nào
từ 2 đến tiệm cận không
    nếu có thì kết luận number k phải là snt
còn nếu chạy từ 2 đến tiệm cận ko phát hiện
number chia hết cho số nào thì mới kết luận
number là số nguyên tố
*/
int main()
{
    int number;

    printf("Input number: ");
    scanf("%d", &number);

    if(number < 2){
        printf("\n%d is not Prime", number);
        return 0;
    }else{
        for(int i = 2; i < number; i++){
            if(number % i == 0){
                printf("\n%d is not Prime", number);
                return 0;//dừng chương trình
            }
        }
        printf("\n%d is Prime", number);
    }
    return 0;
}
