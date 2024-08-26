#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter value :";
	cin>>n;
	string result=(n%3==0)?"divisble":"not divisible";
	cout<<"the given number is "<<result<<" by 3"<<endl;
	return 0;
}
