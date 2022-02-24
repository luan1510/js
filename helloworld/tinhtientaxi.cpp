#include <iostream>
#define A 15000
#define B 13500
#define C 11000
#define giamgia 0.1
using namespace std;
double dtien1(double km);
int main()
{
    
    double km;
    cout<<"nhap so km da di:";cin>>km;
    double dtien2 = dtien1(km);
    cout<<"so tien phai tra la:"<< dtien2 <<"đ"<<endl;
    return 0;
}
double dtien1(double km)
{
    int z[3]{1 ,5 ,120};
    double tien1(0);
    
    if (km <= z[0])
    {
        tien1 = km * A;
    }
    else if (km < z[1])
    {
        tien1 = A + (km - z[0]) * B;
    }
    else if(km > z[1])
    {
        tien1 = A + 4 * B + (km - z[1]) * C;
         if (km > z[2])
            {
                tien1 =  tien1 - (tien1 * giamgia);
            }
    }
    return tien1;
}