#include <stdio.h>
#include <stdlib.h>

//  26-toUpperCaseV4
char toUpperCaseV4(char character);
int main()
{
    //input
    char ch;
    printf("input char: ");//vd: input 'h'
    scanf("%c", &ch);
    ch = toUpperCaseV4(ch);//call   //same same ch = ch - 32
    //output
    printf("\nket qua la: %c", ch);
    return 0;
}
char toUpperCaseV4(char character){//build
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    return character;
}
