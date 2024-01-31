// Rotate Array by k elements
// extra array space needed

#include <iostream>

using namespace std;

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

    // no rotation required. since, rotating by same number of elements as the size of the array will result in the exact same array
    if (k == n)
    {
        return;
    }

    if (k > n)
    {
        k = k % n;
    }

    int tempArr[k];

    for (int i = 0; i < k; i++)
    {
        tempArr[i] = arr[i];
    }

    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = n - k; i < n; i++)
    {
        arr[i] = tempArr[i - (n - k)];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// TC -> O(n+k)
// SC -> O(k)