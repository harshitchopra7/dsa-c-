// Pushes maximum element to the last index by adjacent swaps
// At the first iteration, we will be getting max element at the last index
// Repeat till array is sorted

#include <iostream>

using namespace std;

int main()
{
    // take n integers in array
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 1; i--)
    {
        bool didSwap = false;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap = true;
            }
        }
        // if no swap happens, this means that array is sorted 
        if (didSwap == false)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}