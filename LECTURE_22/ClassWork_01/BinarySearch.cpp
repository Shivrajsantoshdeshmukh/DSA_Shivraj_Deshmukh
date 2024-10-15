#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    //start mid end
    int start=0;
    int end=n-1;
    //int mid=(start+end)/2;
    int mid;
    while(start<=end)
    {
        //mid find karayacha
        mid=(start+end)/2;
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
    cout<<"Enter the size of an array";
    cin>>n;
    cout<<"Enter the Element of an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key Element";
    cin>>key;
    cout<<"This is the position: ";
    cout<<BinarySearch(arr,n,key);

}