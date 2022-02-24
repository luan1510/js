#include <iostream>

using namespace std;
bool nawmnhuan(int year);
int ngaytheothang(int month, int year);
bool ngayhople(int day, int month, int year);
void giammotngay(int &day, int& month, int& year);
void tangmotngay(int& day, int& month, int& year);
int main()
{
    int day, month, year;
    cout<<"enter the computer: "<<endl;
    cout<<"day: ";cin>> day;
    cout<<"month: ";cin>> month;
    cout<<"year: ";cin>> year;
    if(ngayhople(day, month, year))
    {
        cout<<day<<"/"<<month<<"/"<<year<<" correct!!"<<endl;
    }
    else{
        cout<<day<<"/"<<month<<"/"<<year<<" wrong!!"<<endl;
    }
    giammotngay(day, month, year);
    cout<<"Yesterday: "<< day<<"/"<<month<<"/"<<year<<endl;
    tangmotngay(day, month, year);
    cout<<"Tomorrow: "<< day<<"/"<<month<<"/"<<year; 
    return 0;
}
void tangmotngay(int& day, int& month, int& year )
{
    day++;
    if(day > ngaytheothang(month, year))
    {
        day = 1;
        month++;
        if(month > 12)
        {
            month = 1;
            year++;
        }
    }
}
void giammotngay(int &day, int& month, int& year)
{
    day--;
    if(day == 0)
    {
        month--;
            if(month == 0)
        {
            month = 12;
            year--;
        }
        day = ngaytheothang(month, year);
    }
    
    
}
bool namnhuan(int year)
{
if( year % 4 == 0 && year % 100 != 0 || year % 100)
{
    return true;
}
return false;
}
int ngaytheothang(int month, int year)
{
    int kday;
    switch (month)
    {
    case 1:
    case 5:
    case 3:
    case 7:
    case 8:
    case 10:
    case 12:
            kday = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
            kday = 30;
        break;
    case 2:
        if(namnhuan(year))
        {
            kday = 29;
        }
        else
        {
        kday = 28;
        }
        break;
    }
    return kday;
}
bool ngayhople(int day, int month, int year)
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