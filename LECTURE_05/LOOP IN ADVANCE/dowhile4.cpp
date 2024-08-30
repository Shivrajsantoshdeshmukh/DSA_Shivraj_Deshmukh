#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the num";
    cin>>n;
    int i=1;
    int fact=1;
    do{
     if(n%i==0)
     {
       cout<<i<<" ";
        //int fact;
       // fact=fact*i;
        //cout<<fact;
       // i++;
     }
     i++;
    }while(i<=n);
}    
    
    