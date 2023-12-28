#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*cntt: xu ly thong tin bang cong nghe
input project output(report)

datatype:  kieu du lieu
ky tu      char   character  1byte 'a', '2' , 'diep' -> 'p'
so nguyen  int    integer    4byte  9 , 1999, 17.9   -> 17 (so nguyen)
so thuc    float  float      4byte  9 , 1999, 17.9   -> 17.9
so thuc    double long float 8byte  9 , 17.9, 134267643.3152783
*/
//c la ngon ngu huong thu tuc
//procedure: tuan tu, sequence: dong chay
//dau nhac he args
int main()
{
    SetConsoleOutputCP(65001);
    //luu tru
    //luu ki tu dau tien trong ten cua minh
    //1.xac dinh kieu: char
    //2.xac dinh ten: dat ten cho co nghia
    //  cammelCase: cu phap con lac da
    //  khong ky tu dac biet (tru $ _)
    //  khong co so o dau
    //  phai la danh tu
    //  = phep gan | assignment

    //tao vi|ly| bien de luu
    char firstCharOfName = 'k';
    //luu tuoi cua minh
    int age = 18;
    //luu diem toan ky thi quoc gia
    float point = 8.25;
    double score = 9.8;

    //xem da luu gi
    //printf format: in theo dinh dang, theo chuan
    printf("Anh Diep dep trai");
    //in ra ky tu dau tien trong ten cua minh
    printf("\nKy tu dau tien la %c", firstCharOfName);
    //in ra tuoi cua ban: in ra gia tri cua age di
    printf("\nTuoi ne %i", age);
    printf("\nTuoi ne %d", age);//d: decimal
    //in ra diem cua ban: point
    printf("\nDiem ne %.2f", point);
    //in ra score di
    printf("\nScore ne %.2lf", score);//lf: long float
    //in ra dia chi bien age di
    printf("\nDia chi cua age ne %u", &age);

    //ngoai le:
    int number = 'A';
    char ch = 66;
    printf("\nNumber ne %d", number);//65 - 'A'
    printf("\nNumber ne %c", number);//A
    printf("\nch ne %d", ch);//66 - 'B'
    printf("\nch ne %c", ch);//B

    //tu duy lap trinh
    //vi du: tinh tong va thuong 2 bien so nguyen
    int numb1 = 10;
    int numb2 = 3;
    int result = numb1 + numb2;
    printf("\n%d + %d = %d", numb1, numb2, result);
    float numb3 = (float)numb1 / numb2;//ep kieu du lieu
    printf("\n%d / %d = %.2f", numb1, numb2, numb3);

    //swap: hoan vi
    //hoan vi hai gia tri trong so nguyen
    int number1 = 15;
    int sting = 10;

    //number1 =  sting;
    //sting = number1;

    //c1(cách phổ thông, thông qua trung gian tmp)
    //int tmp = sting;//tmp = 10
    //sting = number1;//sting = 15
    //number1 = tmp;//number1 = 10

    //c2( lợi dụng cách thức hoạt động của c)
    sting = sting + number1;//sting = 10 + 15 = 25
    number1 = sting - number1;//number1 = 25 - 15 = 10
    sting = sting - number1;//sting = 25 - 10 = 15

    printf("\nNumber1 = %d, sting = %d", number1, sting);

    return 0;
}
//return 0: tra ra 0 cho nguoi goi
// window nhan dc thi 0 biet chuong trinh dung roi
// null: biet kieu du lieu nhung ko biet gia tri
// void: ko co gi het
/*
0 null "\0"
enter 10 "\n"
space 32 " "
47 "/"
48-57 "0-9"
65-90 "A-Z"
97-122 "a-z"
*/
