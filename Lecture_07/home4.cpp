#include<iostream>
using namespace std;
int main()
{
    int n;
    int row,col;
    cout<<"ENter the input";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        cout<<"*"<<" ";
    cout<<"\n";
    }
    cout<<"\n";
}