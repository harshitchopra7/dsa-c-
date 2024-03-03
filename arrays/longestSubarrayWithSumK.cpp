// You are given an array 'a' of size 'n' and an integer 'k'.
// Find the length of the longest subarray of 'a' whose sum is equal to 'k'.
// Example :
// Input: ‘n’ = 7 ‘k’ = 3
// ‘a’ = [1, 2, 3, 1, 1, 1, 1]
// Output: 3

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k = 17;

    int maxLength = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0, count = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            count++;

            if (sum == k)
            {
                maxLength = max(maxLength, count);
                count = 0;
                break;
            }
            if (sum > k)
            {
                count = 0;
                break;
            }
        }
    }

    cout << maxLength;

    return 0;
}