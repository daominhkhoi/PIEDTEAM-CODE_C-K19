#include <stdio.h>
#include <stdlib.h>
/*
    14-delBuffer
nhập age và firstCharOfName rồi in ra màn hình
*/
int main()
{
    int age;
    char firstCharOfName;

    printf("\nInput age: ");
    scanf("%d", &age);

    fflush(stdin);//xoá buffer(ở bộ nhớ đệm)

    printf("\nInput firstCharOfName: ");
    scanf("%c", &firstCharOfName);

    //in ra màn hình
    printf("\nAge: %d", age);
    printf("\nFirstCharOfName: %c", firstCharOfName);
    return 0;
}
