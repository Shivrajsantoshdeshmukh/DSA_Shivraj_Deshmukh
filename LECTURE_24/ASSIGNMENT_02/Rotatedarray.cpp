#include<iostream>
using namespace std;
int ans;
int BinarySearch(int arr[],int n)
{
     int start=0,end=n-1,mid;
     ans=arr[0];
    
        while(start<=end)
        {
            mid=end+(start-end)/2;
            if(arr[mid]>=arr[0])
            {
                start=mid+1;
            }
            else
            {
                ans=arr[mid];
                end=mid-1;
            }

            
            
            
        }
        return ans;

}
int main()
{
    int arr[1000];
    int n;
    
    
    cout<<"Enter the size of an array";
    cin>>n;
    cout<<"Enter the element of an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"This is minimum element"<<BinarySearch(arr,n);
   
   
    }

