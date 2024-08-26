#include <iostream>
using namespace std;

int main() {
    int n, pos, value;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n + 1];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position to insert: ";
    cin >> pos;
    cout << "Enter the value to insert: ";
    cin >> value;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;

    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

