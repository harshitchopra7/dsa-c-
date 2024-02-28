#include <iostream>
#include <string>

using namespace std;

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

string intToRoman(int num)
{
    string roman[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int integers[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string str;

    for (int i = 12; i >= 0; i--)
    {
        int k = num / integers[i];
        if (k > 0)
        {
            while (k--)
            {
                str += roman[i];
            }
            num = num % integers[i];
        }
    }
    return str;
}

int main()
{
    int num;

    cin >> num;

    cout << intToRoman(num);

    return 0;
}