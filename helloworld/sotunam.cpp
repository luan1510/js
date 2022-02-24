//số tự mãn : vd: 153 = 1^1 + 5^3 + 3^3
#include <iostream>
#include <cmath>

using namespace std;
int dem(int n);
int tachso(int n);
int main()
{
    int kn;
    cout<<"nhap so can kiem tra: ";cin>> kn;
    int tongkiemtrathuc = tachso(kn);
    if (tongkiemtrathuc == kn)
    {
        cout<<"la so tu man";
    }
    else
    {
        cout<<"khong phai so tu man";
    }
    
    return 0;
}
int dem(int n)  //đếm số chữ sô
{
    
   if (n < 10 )
   {
       return 1;    //nhỏ hơn 10 thì có 1 chữ số
   }
    return 1 + dem(n / 10); //lớn hơn 10 thì cộng với số lần chia được cho 10
}

int tachso(int n)
{
    int mu = dem(n);   
    int tongkiemtra(0);
 int du;
    while ( n != 0)
    {
        du = n % 10;    //chia lấy dư lưu để tách từng số vào int du để lưu
        tongkiemtra += pow(du , mu); //tính mũ và cộng số vừa tính mũ   
                n /= 10;        //loại bỏ 0 bên phải
    }
    return tongkiemtra;
}
