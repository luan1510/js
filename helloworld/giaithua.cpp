#include <iostream>
using namespace std;
int giaithua(int n);
int main()
{
    int nk;
    cout<<"nhap so can tinh giai thua: ";cin>>nk;
    int giaithua2 = giaithua(nk);
    cout<<nk<<"!= "<< giaithua2;
    system("pause");
    return 0;
}
int giaithua(int n)
{
//cách 1
    int giaithua1(n);
   
    while (n != 1)
    {
        giaithua1 = giaithua1 * (n - 1);
        n--;
    }
    if(n ==0)
    {
        cout << 1;
    }
//cách 2
    // int giaithua1(1);
    // for (int i =  n; i > 0; i--)
    // {
    //     giaithua1 = giaithua1 * i;
    // }
    
    return giaithua1;
}
//cách 3
// int giaithua(int n)
// {
//     if(n == 0)
//     {
//         return 1;
//     }
//     return n * giaithua(n - 1);
// }
