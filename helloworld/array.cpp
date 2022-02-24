#include <iostream>
using namespace std;
struct ranchoi
{
 
int tuoi;
int die;
int taisan;

 ranchoi(int t,int d,int s)
  {
      tuoi = t;
      die = d;
      taisan = s;
  }
};
int main()
{
ranchoi khabanh(23,70,10);
ranchoi dungtroc(41,72,11);
ranchoi hoangducnhan(28,28,55);
ranchoi *baba;
//thangso1
khabanh.die=100;
baba = &khabanh;
cout<< (*baba).die <<endl;
//thangso2
baba = &dungtroc;
cout << (*baba).die <<endl;
//thángo3
baba = &hoangducnhan;
cout << (*baba).taisan <<endl;

  return 0;
}