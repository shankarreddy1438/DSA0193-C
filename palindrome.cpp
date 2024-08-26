#include <iostream>
using namespace std;
int main() {
    string str, revStr = "";
    cout << "Enter a string: ";
    cin >> str;
    int len = str.length();
    int i = len - 1;
    while (i >= 0) {
        revStr += str[i];
        i--;
    }
    if (str == revStr){
        cout << str << " is a palindrome." << endl;}
    else{
        cout << str << " is not a palindrome." << endl;
}
    return 0;
}

