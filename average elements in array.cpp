#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0, avg;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    avg = sum / n;
    cout << "Average of all elements: " << avg << endl;
    return 0;
}

