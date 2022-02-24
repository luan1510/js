#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
 string kha("khabanhtrenmoinennhac");
 cout << kha<<endl;
 cout<< kha.length()<<endl;
 cout<< kha.size()<<endl;
 srand(time(0));
 for (int i = 0; i < 10; i++)
 {
   cout<< rand()%100<<" "<<endl;
 };
 int *x {NULL};
    return 0;
}