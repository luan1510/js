#include <iostream>

using namespace std;
int tinhsodao(int n);
bool kiemtra(int n);
int main()
{
    int nk;
    cout<<"nhap so can kiem tra so doi xung: ";cin>> nk;
    int ksodoi = tinhsodao(nk);
        if (nk == ksodoi)
    {
        cout<<"la so doi xung";
    }
    else
    {
        cout<<"khong phai so doi xung";
    }
    return 0;
}


int tinhsodao(int n)
{
int du,sodao(0);
    // for(;n != 0;n /= 10)
    //     {
    //         du = n % 10;
    //         sodao = sodao*10 + du;
            
    //     }
    while (n != 0)
    {
        du = n % 10;
        sodao = sodao * 10 + du;
        n /= 10;
    }
    
    sodao / 10;
    return sodao;
}