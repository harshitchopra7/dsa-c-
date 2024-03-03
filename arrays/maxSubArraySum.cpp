// TC -> O(n)

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

void findTwoSum(int nums[], int target, int n)
{
    for (int i = 0; i < n; i++)
    {
        int numToFind = target - nums[i];
        for (int j = i + 1; j < n; j++)
        {
            if (numToFind == nums[j])
            {
                cout << i << " " << j << endl;
            }
        }
    }
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

    int k = 11;

    int maxSum = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        else
        {
            maxSum = max(maxSum, sum);
        }
    }

    cout << maxSum;

    return 0;
}