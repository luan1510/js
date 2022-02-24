#include <iostream>
using namespace std;

int tongso(int n);
int demdequy(int n);
int main()
{
    int nk;
    cout<<"nhap so can tinh tong: ";cin>> nk;
    // int kdem = tongso(nk);
    // cout << kdem;
    int kdem = tongso(nk);
    cout << kdem;
    return 0;
}
int tongso(int n)
{
    int dem(0);
    while(n != 0)
    {
        n /= 10;
        dem++;
    }
    return dem;
}
// int demdequy(int n)
// {
//     if (n < 10)
//     {
//         return 1;
//     }
//     return 1 + demdequy(n / 10);
// }