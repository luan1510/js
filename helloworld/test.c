#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
            //NHẬP XUẤT CƠ BẢN
    // float a,b,c,cv,p,s;
    // printf("nhap a: ");
    // scanf("%f",&a);
    // printf("nhap b: ");
    // scanf("%f",&b);
    // printf("nhap c: ");
    // scanf("%f",&c);
    // cv = a + b + c;
    // printf("cv = %3.2f \n",cv);
    // p = cv/2;
    // printf("p = %3.2f\n",p);
    // s = sqrt((p*a)*(p*b)*(p*c));
    // printf("s = %3.2f",s);

            //BIẾN CHAR

    char name[30],maSV[5];
    float diemTB;
    printf("nhap ten: "); gets(name);
    printf("Ma SV: " ); gets(maSV);
    printf("Diem TB: "); scanf("%f",&diemTB);
    printf("Ten \t\t Ma SV \t Diem TB: \n");//in ký tự
    puts(name);
    puts(maSV);
    printf("%3.2f",diemTB);
    getch();
}