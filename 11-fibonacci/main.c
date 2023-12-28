#include <stdio.h>
#include <stdlib.h>
/*
    11-fibonacci
dãy số hoàn hảo
nhập vào 1 số nguyên n
in ra màn hình số ở  vị trí thứ n trong dãy
fibonacci
    n   1   2   3   4   5   6   7   8
    0   1   1   2   3   5   9   13  21
*/
int main()
{
    //setup trạng thái n = 1
    int prev = 0;
    int curr = 1;
    int result = 1;

    int n;//n là vị trí mà ng dùng muốn tìm
    printf("\nNhap n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n - 1; i++){//có sẵn 1 bước ở bước setup rồi nên chạy đến n - 1
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    //in kết quả
    printf("\n%d la so o vi tri %d", result, n);
    return 0;
}
