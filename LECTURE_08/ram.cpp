#include<iostream>
using namespace std;
int main()
{
    cout<<"ram\n";
    int row;
    char col;
    for(row=1;row<=5;row++)
    {
        for(char col='a';col<='e';col++)
        {
            cout<<col<<"  ";
        }
        cout<<endl;
    }
}

