#include <iostream>
using namespace std;

int sumOfSquares(int num) {
    int sum = 0, temp;
    while (num) {
        temp = num % 10;
        sum += temp * temp;
        num /= 10;
    }
    return sum;
}

bool isHappyNumber(int num) {
    int slow = num, fast = num;
    do {
        slow = sumOfSquares(slow);
        fast = sumOfSquares(sumOfSquares(fast));
    } while (slow != fast);
    return (slow == 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHappyNumber(num))
        cout << num << " is a Happy number." << endl;
    else
        cout << num << " is not a Happy number." << endl;

    return 0;
}

