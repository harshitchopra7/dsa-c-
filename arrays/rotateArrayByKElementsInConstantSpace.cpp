#include <iostream>

using namespace std;

void reverseArray(int arr[], int left, int right)
{
    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    // rotation by k elements
    int k;
    cin >> k;

    // take n integers in array
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // reverse elements from 0 to k-1
    reverseArray(arr, 0, k - 1);

    // reverse elements from k to n-1
    reverseArray(arr, k, n - 1);

    // reverse elements from 0 to n-1
    reverseArray(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// TC -> O(n+k)
// SC -> O(1)