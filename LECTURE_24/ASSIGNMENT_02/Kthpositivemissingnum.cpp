//Kth misssing number
#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    int ans;
    cout<<"Enter the size of an array";
    cin>>n;
    cout<<"Enter the element of an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter Kth missing element";
    cin>>k;
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=k)
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<ans+k;
}
