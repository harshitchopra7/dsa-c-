// An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

#include <iostream>

using namespace std;

bool checkArmstrong(int n)
{
    int duplicate1 = n;
    int duplicate2 = n;

    // count digits
    int numberOfDigits = 0;
    while (duplicate1 > 0)
    {
        numberOfDigits++;
        duplicate1 = duplicate1 / 10;
    }

    int sum = 0;
    while (duplicate2 > 0)
    {
        int lastDigit = duplicate2 % 10;
        sum = sum + pow(lastDigit, numberOfDigits);
        duplicate2 = duplicate2 / 10;
    }
    return sum == n;
}

int main()
{
    int n;
    cin >> n;

    cout << checkArmstrong(n);

    return 0;
}