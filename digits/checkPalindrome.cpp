// number === reversedNumber

#include <iostream>

using namespace std;

bool palindrome(int n)
{
    int reverseNum = 0;
    int duplicate = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        n = n / 10;
    }
    return reverseNum == duplicate;
}

int main()
{
    int n;
    cin >> n;

    cout << palindrome(n);

    return 0;
}