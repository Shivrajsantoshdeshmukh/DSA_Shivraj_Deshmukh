 #include<iostream>
 using namespace std;
 int main()
 {
    int arr[1000];
    int n;
    cout<<"Enter the the size of ana array";
    cin>>n;
    cout<<"Enter the element of an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key element here";
    cin>>key;

 
  int start=0,first=-1,last=-1,mid;
        int end=n-1;
        while(start<=end)
        {    //pahila sapad aadhi
            mid=start+(end-start)/2;
        if(arr[mid]==key)
            {
                first=mid;
                end=mid-1;
            }
            else if(arr[mid]<=key)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            //cout<<first;
        }
        cout<<first<<" ";
             start=0,end=n-1;
            while(start<=end)
        {  //dusara sapad ata
            mid=start+(end-start/2);
            if(arr[mid]==key)
            {
                last=mid;
                start=mid+1;
            }
            else if(arr[mid]<=key)
            {
                start=mid+1;
            }
          else
            {
                end=mid-1;
            }
          //  cout<<last;
        }
        cout<<last;
 }