#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={1,8,6,7,9};
    int i;
    int ans=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(ans<arr[i])
        ans=arr[i];


        
    }
    cout<<ans;
}