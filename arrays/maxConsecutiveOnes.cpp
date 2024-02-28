#include <iostream>

using namespace std;

int maxConsecutiveOnes(int arr[], int n)
{
    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            if (count > maxCount)
            {
                maxCount = count;
            }
            count = 0;
        }
    }

    return maxCount;
}

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxConsecutiveOnes(arr, n);

    return 0;
}