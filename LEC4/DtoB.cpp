#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num";
    cin>>n;
    int rem,mul=1;
    int ans=0;
    while(n>0)
    {rem=n%2;
    n=n/2;
    ans=rem*mul+ans;
    mul=mul*10;
    }
    cout<<"Binary of that num is :"<<ans;

}