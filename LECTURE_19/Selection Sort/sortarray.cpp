#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 4, 1, 3, 2, 7};
    int index = 0;

    // Find the index of the maximum element in the array
    for(int j = 1; j < 6; j++)
    {
        if(arr[index] < arr[j])
            index = j;
    }

    // Swap the maximum element with the first element
    int temp;
    temp = arr[0];      // Swap arr[0] with arr[index]
    arr[0] = arr[index];
    arr[index] = temp;

    // Output the modified array
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

