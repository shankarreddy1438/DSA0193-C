#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int floorvalue,ceilvalue,roundedvalue;
    float number;
    cout << "Enter a floating-point number: ";
    cin >> number;
    floorvalue=floor(number);
    ceilvalue=ceil(number);
    cout << "Rounded down (floor): " << floorvalue << endl;
    cout << "Rounded up (ceil): " << ceilvalue << endl;
    if((number-floorvalue)<(ceilvalue-number)){
    	roundedvalue=floorvalue;
	}
	else{
		roundedvalue=ceilvalue;
	}
	cout<<"rounded value is :"<<roundedvalue<<endl;
    return 0;
}

