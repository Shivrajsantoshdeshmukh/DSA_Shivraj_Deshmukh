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
        char name='A';
        for(col=1;col<=row;col++)
        cout<<name;
        name++;
        char n=name-2;
        for(col=1;col<=row;col++)
        {cout<<n;
        n--;
        }
        cout<<"\n";
        
    }
      
      
}