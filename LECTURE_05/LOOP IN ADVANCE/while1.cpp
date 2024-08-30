#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int i=1;
    cout<<"enter the num";
    cin>>n;
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<"Even num is :";
            cout<<i;
             
            i++;
        }
        //cout<<endl;
        else
        {
            cout<<"Odd num is :";
            cout<<i;
            i++;

        }
    }
}