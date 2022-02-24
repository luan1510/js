#include <iostream>

using namespace std;
int tinhtongcacso(int n);
int main()
{
    int nk;
    cout<<"nhap so can tinh:";cin>> nk;
    int ntong = tinhtongcacso(nk);

    cout<<"tong cac so bang: "<< ntong <<endl;
    return 0;
}
// int tinhtongcacso(int n)
// {
//      int tong,du;
//     while (n !=0)
//     {
//         du %= 10;

//         tong += du;

//         n /= 10;
//     }
    
//     return tong;
// }
int tinhtongcacso(int n)
{
    int tong(0),du;
    for (;n != 0; n /= 10)
    {
        du = n % 10;

        tong += du;

        
    }
    return tong;
}