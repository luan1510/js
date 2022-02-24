#include <iostream>

using namespace std;
bool ngayhople(int day,int month,int year);
bool namnhuan(int year);
int ngaytheothang(int month,int year);
int main()
{
    int nDay, nMonth, nYear;
    cout<<"day: ";cin>> nDay;
    cout<<"month: ";cin>> nMonth;
    cout<<"year: ";cin>> nYear;
    if(ngayhople(nDay, nMonth, nYear))
    {
        cout<<nDay<<"/"<<nMonth<<"/"<<nYear<<" correct!!";
    }
    else
    {
        cout<<nDay<<"/"<<nMonth<<"/"<<nYear<<" wrong!!"; 
    }
    return 0;
}
bool namnhuan(int year)
{
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return true;
    }
    return false;
}
int ngaytheothang(int month, int year)
{
    int pday;
 switch (month)
 {
 case 1:
 case 3:
 case 5:
 case 7:
 case 8:
 case 10:
 case 12:
        pday = 31;
     break;
 case 4:
 case 6:
 case 9:
 case 11:
        pday = 30;
     break;
 case 2:
    if(namnhuan(year))
    {
        pday = 29;
    }
    else
    {
        pday = 28;
    }
     break;
 }
 return pday;
}
bool ngayhople(int day,int month,int year)
{
        if(year < 0)
        {
            return false;
        }
        if(month < 0 || month > 12)
        {
            return false;
        }
        if(day < 0 || day > ngaytheothang(month, year))
        {
            return false;
        }
    return true;
}