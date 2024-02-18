#include <iostream>

using namespace std;

int numberOfDigits(int num)
{
    int counter = 0;

    while (num > 0)
    {
        counter++;
        num = num / 10;
    }
    return counter;
}

int main()
{
    int n;
    cin >> n;

    cout << numberOfDigits(n);

    return 0;
}