#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the num";
    cin>>n;
    int i=1;
   do{
     if(n%i==0)
     {
        cout<<i<<" ";
        
     }
     i++;

   }while(i<=n);
}
   