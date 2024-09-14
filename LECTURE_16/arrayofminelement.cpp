#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={1,2,3,7,5};
    int ans=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(ans>arr[i])
        ans=arr[i];

    }
    cout<<ans;
}