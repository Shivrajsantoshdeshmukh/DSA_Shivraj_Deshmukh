#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n,int key)
{
    //start mid end
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end)
    {
        mid=start+((end-start)/2);
      if(arr[mid]==key)
      {
        return mid;
      }
      else if(arr[mid]<key)
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
    cout<<"Enter the Size of array";
    cin>>n;
    cout<<"Enter the array Element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the Key Element";
    cin>>key;
    cout<<"Position of key element: "<<BinarySearch(arr,n,key);

}