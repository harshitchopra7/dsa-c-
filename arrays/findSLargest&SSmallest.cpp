// find the second largest and second smallest element

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    int largest = *a.begin();
    int sLargest = *a.begin();

    int smallest = *a.begin();
    int sSmallest = *a.begin();

    vector<int> v;

    for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
    {
        if (*it > largest)
        {
            sLargest = largest;
            largest = *it;
        }
        else if (*it < smallest)
        {
            sSmallest = smallest;
            smallest = *it;
        }
    }

    v.push_back(sLargest);
    v.push_back(sSmallest);

    return v;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    vector<int> vec = getSecondOrderElements(10, v);

    for (auto it : vec)
    {
        cout << it << " " << endl;
    }

    return 0;
}