#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double temp;
    char choice;

    cout << "Enter temperature (C for Celsius, F for Fahrenheit): ";
    cin >> temp >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << temp << "°C is " << celsiusToFahrenheit(temp) << "°F" << endl;
    } else if (choice == 'F' || choice == 'f') {
        cout << temp << "°F is " << fahrenheitToCelsius(temp) << "°C" << endl;
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}

