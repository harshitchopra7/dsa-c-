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

    int firstElement = arr[0];

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = firstElement;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// TC -> O(n)
// SC -> O(1)