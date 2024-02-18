// TC -> sqrt(n)

#include <iostream>

using namespace std;

bool isPrime(int n)
{
    int counter = 0;
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            counter++;
            int multiplier = (n / i);
            if (n % multiplier == 0)
            {
                counter++;
            }
        }
    }
    return counter == 2;
}

int main()
{
    int n;
    cin >> n;

    cout << isPrime(n) << endl;

    return 0;
}