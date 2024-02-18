#include <iostream>

using namespace std;

// brute force approach
// TC -> O(n)
// int sumOfAllDivisors(int n){
// 	int sum = 0;

// 	for(int i=1; i<=n; i++) {
// 		if(n % i == 0) {
// 			sum = sum + i;
// 		}
// 	}
// }

// Optimised approach
// TC -> O(sqrt(n))
int sumOfAllDivisors(int n)
{
    // Write your code here.
    int sum = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int multiplier = n / i;
            if (multiplier == i)
            {
                sum = sum + i;
            }
            else
            {
                sum = sum + i + multiplier;
            }
        }
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    cout << sumOfAllDivisors(n);

    return 0;
}