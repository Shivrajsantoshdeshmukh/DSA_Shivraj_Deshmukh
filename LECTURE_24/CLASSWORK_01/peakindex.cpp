#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n)
{
     int start=0,end=n-1,mid;
    
        while(start<=end)
        {
            mid=end+(start-end)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid]>arr[mid-1])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }

        }
        return -1;

}
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
    cout<<"This is Peak Element"<<BinarySearch(arr,n);
   
   
    }
