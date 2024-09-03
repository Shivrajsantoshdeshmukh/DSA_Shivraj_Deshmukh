#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the num";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        if(i%3==0 && i%5==0)
        {
      //  cout<<i<<" ";
        continue;
        i++;
        }
        else 
       {
        cout<<i<<"  ";
        i++;
       }
    }
}