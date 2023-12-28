#include <stdio.h>
#include <stdlib.h>

//  26-toUpperCaseV2
void toUpperCaseV2(char character); // hàm có sẵn input
int main()
{
    //input: xin giá trị
    char ch;
    printf("input char: ");//vd: input 'h'
    scanf("%c", &ch);
    toUpperCaseV2(ch);//call : argument
    //printf("\n%c", &ch); -> h
    return 0;
}
void toUpperCaseV2(char character){//build : parameter
    //ch = bug???!!!
    //khai báo để hứng giá trị từ ch
    //char character: parameter: tham số(tham khảo giá trị của đối số)
    //ch            : argument : đối số (cho số khác đối chiếu; char character = ch);
    //mối quan hệ giữa character với ch là pass by value: truyền tham trị
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    //output: review -> printf...
    printf("\nky tu: %c", character);
}
