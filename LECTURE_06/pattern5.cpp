#include<iostream>
using namespace std;
int main()
{
    int i,j;
    
    
    int n;
    cout<<"enter the number that print * of that number are rows and col star are equal";
    cin>>n;
    for(j=1;j<=n;j++)
    {char c='a'+ (j-1);
        for(i=1;i<=n;i=i+1)
        {//int sq=i*i;
            cout<<c<<" ";
        }
        cout<<endl;
    }
}