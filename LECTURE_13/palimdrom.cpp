#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the num";
    cin>>n;
        if(n==0)
        return 1;
        int ans=0;
        int mul=1;
        int rem;
        while(n)
        {
            rem=n%2;
            rem=rem^1;
            n=n/2;
            ans=ans+rem*mul;
            mul=mul*2;
        }
        return ans;
        
        
    }
