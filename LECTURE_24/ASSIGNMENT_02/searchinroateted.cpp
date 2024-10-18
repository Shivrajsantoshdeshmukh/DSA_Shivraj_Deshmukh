#include<iostream>
using namespace std;


int BinarySearch(int arr[],int n)
{
     int start=0,end=n-1,mid;
     int target;
     cin>>target;
     
     
    
        while(start<=end)
        {
            mid=end+(start-end)/2;
            
            if(arr[mid]==target)
            {
              return mid;
            }
            else if(arr[mid]>arr[0])
            {
                if(arr[start]<=target && target<=arr[mid])
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }
            else
            {
                if(arr[mid]<target && arr[end]>=target)
                {
                    start=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }

            
            
            
        }
       
       return -1;

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
    
    
    cout<<"This is Search element at this position"<<BinarySearch(arr,n);
   
   
    }


