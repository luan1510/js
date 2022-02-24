#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int count(0);
    cout<<"nhap so can kien tra: ";cin>>n;
    if(n < 2)
    {
        cout<< n <<" khong phai so nguyen to";
    }
    for(int i = 2; i <= sqrt(n);i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }    
        if(count == 0)
        {
            cout<< n <<" la so nguyen to";
        }
        else
        {
            cout<< n <<" khong phai so nguyen to";
        }
    system("pause");
    return 0;
}
