#include<iostream>
using namespace std;
int prime(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int fact(int n)
{
    int ans=1;
    for(int i=1;i<n;i++)
    {ans=ans*i;
    }
    return ans;
    }
int main()
{
    int a,b;
    cout<<"enter the num";
    cin>>a>>b;
    cout<<prime(a);
    cout<<endl;
    cout<<prime(b);
    cout<<endl;
    cout<<fact(a);
    cout<<endl;
    cout<<fact(b);
    cout<<endl;
    cout<<prime(b-a);
    cout<<endl;
    cout<<fact(b-a);
}