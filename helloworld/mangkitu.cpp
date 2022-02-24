#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[100]("khabanh-deptrai-nhagiau-muahay");
    cout<< a <<endl;
    char b[10];
    cout<<"nhap dac diem can tim kiem: ";
    cin.getline(b,100);
    if(strstr(a,b) == NULL)
    {
        cout<<"khong";
    }
    else
    {
        cout<<"co";
    }
    //cout<<"anh "<< a <<endl;
    //cout<< "độ dài: "<< strlen(a)<<endl;
    //cout<< "độ dài: "<< sizeof(a)<<endl;
    //strlwr(a);
    //cout<< a <<endl;
    //strupr(a);
    //cout<< a <<endl;
    //strcpy(b,a);
    //cout<< b <<endl;
    //strcat(b," ");
    //strcat(b,a);
    //cout<< b <<endl;
    return 0;
}