#include<iostream>
#include<cmath>
using namespace std;
int countdigit(int num)
{
    int count=0;
    while(num)
    {
        count++;
        num/=10;
    }
    return count;
}
    bool armstrongno(int num ,int digit)
{
    int n=num,ans=0,rem;
    while(n)
    {
        rem=n%10;
        n/=10;
        ans=ans+pow(rem,digit);
    }
    if(ans==num)
    return 1;
    else
    return 0;

}
int main()
{
    int num;
    cout<<"enter the num";
    cin>>num;
    int digit=countdigit(num);
    cout<<digit<<endl;
  cout<<armstrongno(num,digit);
}