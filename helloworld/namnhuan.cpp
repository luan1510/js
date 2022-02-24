#include <iostream>

using namespace std;
bool xetnamnhuan(int nNAM);
void xetkhoangnam(int nNAMDAU,int nNAMCUOI);
int main() {
    int nam;
    cout<<"nhap nam can xet: ";cin>> nam;
    xetnamnhuan(nam);
    if(xetnamnhuan(nam))
    {
        cout<<"la nam nhuan nhe!!";
    }
    else
    {
        cout<<"khong phai nam nhuan nhe!!";
    }
    // int nNAMDAU, nNAMCUOI;
    //  cout<<"xet khoang nam can tim nam nhuan: \n";
    // cout<<"nam dau: ";cin>> nNAMDAU;
    // cout<<"nam cuoi: ";cin>> nNAMCUOI;
    // xetkhoangnam(nNAMDAU, nNAMCUOI);
    system("pause");
    return 0;
}
bool xetnamnhuan(int nNAM)
{
    if(nNAM % 4 == 0 && nNAM % 100 != 0 || nNAM % 400 == 0 )    //diều kiện năm nhuận
    {
        return true;    
    }
     return false;
}
// void xetkhoangnam(int nNAMDAU, int nNAMCUOI)
// {

   
//     for (int i = nNAMDAU; i <= nNAMCUOI; i++)    //lặp đk từ năm đầu đến năm cuối
//     {
//         if(xetnamnhuan(i))
//         {
//             cout<< i <<"\t";     //cout ra từng năm nhuận
//         }
//     }
    
// }


