#include<iostream>
using namespace std;
void swap(int &m,int &n)
{  int temp;
   temp=m;
   m=n;
   n=temp;


}
int main()
{
    int a,b;
    cout<<"Enter the number you want to swap";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<endl<<b;
}