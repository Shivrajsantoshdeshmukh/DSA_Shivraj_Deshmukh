#include<iostream>
using namespace std;
int main()
{
    int arr[5]={3,4,1,2,5};
    int index=0;
    int i;
    for(i=1;i<5;i++)
    {if(arr[i]<arr[index])
    index=i;

    }
    cout<<index;
}
