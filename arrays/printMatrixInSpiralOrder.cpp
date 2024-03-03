#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

void printMatrix(int arr[][4], int rows, int columns)
{
    int left = 0, right = columns - 1;
    int top = 0, bottom = rows - 1;

    while (left <= right && top <= bottom)
    {

        // left -> right
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;

        if (top > bottom)
            return;

        // top -> bottom
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;

        if (right < left)
            return;

        // right -> left
        for (int i = right; i <= left; i--)
        {
            cout << arr[bottom][i] << " ";
        }
        bottom--;

        if (bottom < top)
            return;

        // bottom -> top
        for (int i = bottom; i <= top; i--)
        {
            cout << arr[left][i] << " ";
        }
        left++;
    }
}

int main()
{
    int m, n;

    cin >> m >> n;

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printMatrix(arr, m, n);

    int left = 0, right = n - 1;
    int top = 0, bottom = m - 1;

    while (left <= right && top <= bottom)
    {

        // left -> right
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;

        if (top > bottom)
            break;

        // top -> bottom
        for (int i = top; i <= bottom; i++)
        {

            cout << arr[i][right] << " ";
        }
        right--;

        if (right < left)
            break;

        // right -> left
        for (int i = right; i >= left; i--)
        {
            cout << arr[bottom][i] << " ";
        }
        bottom--;

        if (bottom < top)
            break;

        // bottom -> top
        for (int i = bottom; i >= top; i--)
        {
            cout << arr[i][left] << " ";
        }
        left++;
    }

    return 0;
}