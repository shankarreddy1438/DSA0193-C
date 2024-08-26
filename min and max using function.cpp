#include <iostream>
#include <limits.h>
using namespace std;

void findMinMax(int arr[], int n, int &min, int &max) {
    min = INT_MAX;
    max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
}

int main() {
    int n, min, max;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findMinMax(arr, n, min, max);
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}

