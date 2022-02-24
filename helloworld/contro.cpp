#include <iostream>
using namespace std;

void kha(int *a)
{
    cout<< sizeof(a)<<'\n';
}
int main()
{
    int a[]={1,2,3,4,5,6,7};
    cout<< sizeof(a)<<'\n';
   kha(a);
   int x(10);
   int *b= &x;
   int y = 1000;
   const int *p = &y;
   int m(900);
   p = &m;
   int f(400);
   int *const d = &f;
   
   *d = 200;
   cout<<static_cast<int>(x)<<endl;
    return 0;
}