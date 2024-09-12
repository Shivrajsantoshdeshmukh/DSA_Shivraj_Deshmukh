
#include<iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter the number to find the number of trailing zeros in its factorial: ";
    cin >> n;

    int temp = n; // Save the original value of n for clarity in the loop

    while (temp >= 5) {
        temp /= 5;     // Divide temp by 5
        count += temp; // Add the quotient to count
    }

    cout << "Number of trailing zeros in the factorial of " << n << " is: " << count << endl;

    return 0;
}
