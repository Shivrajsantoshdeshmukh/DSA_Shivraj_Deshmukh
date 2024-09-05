#include<iostream>
using namespace std;
int main()
{
   int n;
    cout<<"Enter the num :  ";
    cin>>n;
    int rem=1,ans=0;
    int mul=1;
    int num;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    cout<<"The decimal num is"<<ans;
    
    
}