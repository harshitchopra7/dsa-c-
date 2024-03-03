// You are given an array of ‘N’ integers where each integer value is between ‘1’ and ‘N’.

// Each integer appears exactly once except for ‘P’, which appears exactly twice, and ‘Q’, which is missing.

// Your task is to find ‘P’ and ‘Q’ and return them respectively.

// Example:
// Input: ‘N’ = 4
// ‘A’ = [1, 2, 3, 2]

// Output: {2, 4}

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

    int missingNumber = INT_MIN;
    int repeatingNumber = INT_MIN;

    int hashArray[n + 1];

    for (int i = 0; i <= n; i++)
    {
        hashArray[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        hashArray[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hashArray[i] == 0)
        {
            missingNumber = i;
        }
        if (hashArray[i] == 2)
        {
            repeatingNumber = i;
        }
    }

    cout << repeatingNumber << " " << missingNumber;

    return 0;
}