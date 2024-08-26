#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, sum = 0, temp, remainder;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        sum += factorial(remainder);
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is a Strong number." << endl;
    else
        cout << num << " is not a Strong number." << endl;

    return 0;
}

