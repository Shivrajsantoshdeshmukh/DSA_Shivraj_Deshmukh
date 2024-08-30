#include<iostream>
using namespace std;
int main()
{
    int n,pow;
    cout<<"Enter the number\n";
    cin>>n;
    cout<<"enter the power of that num\n";
    cin>>pow;
    int num;
    num=n;
    for(int i=1;i<pow;i++)
    {
        num=num*n;
        
    }
     cout<<num;
}