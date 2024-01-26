// Select the minimum element in an array and place it at the first index.
// And the first index's value will go  to the index where minimum element was found
// Repeat this till array is sorted 


#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<=n-2; i++) {
        int min = i;
        for(int j=i; j<=n-1; j++) {
            if(arr[j]<arr[i]) {
                min = j;
            }
        }

        // swap arr[i] and arr[min]
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}