#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i < 100; i++)
    // {
    //     if (i % 3 == 0 && i % 5 == 0)
    //     {
    //         cout <<"kha banh"<<endl;
    //     }
    //     else if (i % 3 == 0)
    //     {
    //         cout<<"kha"<<endl;
    //     }
    
    //     else if (i % 5 == 0)
    //     {
    //         cout<<"banh"<<endl;
    //     }

    //     else
    //     {
    //         cout<< i <<endl;
    //     }
    // }
    for (int i = 0; i <= 10; i++)
    {
        i =(i % 3 == 0) ? "kha" : i;
        cout << i <<endl;
    }
    
    system("pause");
    return 0;
}