#include<iostream>
using namespace std;
int main()
{
    int row, n;
    int col;
    cout<<"enter the number";
    cin>>n;
    for(row=1;row<=n;row++)
    {      for(col=1;col<=n-row;col++)
            cout<<" ";
        char j='E'-row+1;
        for(col=1;col<=row;col++)
        {//har j='E'+row-1;
            
            cout<<j++;
        }
        cout<<endl;
    }
    
}