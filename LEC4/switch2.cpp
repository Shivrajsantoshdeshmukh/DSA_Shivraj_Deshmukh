#include<iostream>
using namespace std;
int main()
{
    int i=3;
    cout<<"Enter the ip";
    cin>>i;
    char day='a'+i-1;
    switch(day)
    {
        case 'a':
        cout<<"MON";
        break;
        case 'b':
        cout<<"TUE";
        break;
        case 'c':
        cout<<"WEDS";
        break;
        case 'd':
        cout<<"THURS";
        break;
        case 'e':
        cout<<"FRI";
        break;
        case 'f':
        cout<<"SATUR";
        break;
        case 'h':
        cout<<"SUN";
        break;


        default :
        cout<<"Enter the valid DAY";
    }
}