#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;
    a = a ^ b;  
    b = a ^ b;
    a = a ^ b;
    cout << "After swapping, first integer: " << a << ", second integer: " << b << endl;
    return 0;
}
