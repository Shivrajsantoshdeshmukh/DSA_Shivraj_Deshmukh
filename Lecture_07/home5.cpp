#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the input: ";
    cin >> n;
    
    for (int row = 1; row <= n; row++) {
        // Printing spaces
        for (int col = 1; col <= n - row; col++) {
            cout << " ";
        }
        
        // Printing characters in increasing order
        for (char ch = 'A'; ch < 'A' + row; ch++) {
            cout << ch;
        }
        
        // Printing characters in decreasing order
        for (char ch = 'A' + row - 2; ch >= 'A'; ch--) {
            cout << ch;
        }
        
        cout << endl;
    }
    
    return 0;
}

