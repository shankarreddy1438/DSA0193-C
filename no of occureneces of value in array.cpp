#include <iostream>
using namespace std;

int main() {
    int n, value, count = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value to find occurrences: ";
    cin >> value;

    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }

    cout << "Number of occurrences of " << value << ": " << count << endl;
    return 0;
}

