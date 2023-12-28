#include <stdio.h>
#include <stdlib.h>

//  26-toUpperCaseV3
char toUpperCaseV3(void); //hàm ăn xin
int main()
{
    char ch = toUpperCaseV3();//call
    printf("\nKy tu: %c", ch);
    return 0;
}
char toUpperCaseV3(void){//build
    //input
    char character;
    printf("input char: ");
    scanf("%c", &character);
    fflush(stdin);
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    //
    return character;
}
