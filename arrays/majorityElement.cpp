#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Moore's Voting Algorithm

// Moore's Voting Algorithm is a way to find the majority element in a list – an element that appears more than half the time. Here are the steps in simple words:

// 1. First Pick: Start by guessing that the first element is the majority.
// 2. Counting: Go through the list. If the current element matches our guess, we increase a counter. If it doesn't match, we decrease the counter.
// 3. Updating: If the counter becomes zero, we change our guess to the current element and set the counter to 1.
// 4. Confirmation: After going through the list, the guessed element is likely to be the majority.
// 5. Validation: Finally, we need to double-check if the guessed element actually appears more than half the time in the list.

// Result: If it does, we found the majority element; if not, there might be no majority element in the list.

int majorityElement(int arr[], int n)
{
    int element = arr[0], count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                element = arr[i];
                count = 1;
            }
        }
    }

    count = 0;

    // verify if the element is actually in the majority
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        return element;
    }

    return -1;
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

    cout << majorityElement(arr, n);

    return 0;
}