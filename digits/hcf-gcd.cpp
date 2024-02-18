// TC->O(min(num1, num2))

#include <iostream>

using namespace std;

// Brute force
// TC -> O(min(num1, num2))
// int findHCF(int num1, int num2)
// {
//     int n = min(num1, num2);
//     int hcf = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         if (num1 % i == 0 && num2 % i == 0)
//         {
//             hcf = i;
//         }
//     }
//     return hcf;
// }

// Euclidian algorithm
// gcd(n1, n2) = gcd(n1 % n2, n2) , where n1 > n2
// repeat the above step till one of the number is 0, then the other number is the answer

// TC -> O(log(min(num1, num2)))
int findHCF(int num1, int num2)
{
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
        {
            num1 = num1 % num2;
        }
        else
        {
            num2 = num2 % num1;
        }
    }

    if (num1 == 0)
    {
        return num2;
    }
    return num1;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << findHCF(n1, n2);

    return 0;
}