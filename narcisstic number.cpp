#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum = 0, temp, remainder, digits = 0;
    cout << "Enter an integer: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is a Narcissistic number." << endl;
    else
        cout << num << " is not a Narcissistic number." << endl;

    return 0;
}

