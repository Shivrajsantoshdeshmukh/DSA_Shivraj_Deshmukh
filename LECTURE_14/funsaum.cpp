#include<iostream>
using namespace std;
int sum(int m,int n)
{
    int ans=m+n;
    return ans;
}
int main()
{
    int a,b;
    cout<<"Enter the number to sum";
    cin>>a>>b;
    cout<<sum(a,b);
}