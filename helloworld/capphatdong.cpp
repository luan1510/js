#include <iostream>
using namespace std;
int main()
{
    int *ptr1 = new int(10);
    cout << *ptr1 <<endl;
    delete ptr1;
    ptr1 = nullptr;

    return 0;
}