#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter a value :";
	cin>>a;
	cout<<"enter b avlue :";
	cin>>b;
	string result= (a==b)?"equal":"not equal";
	cout<<"the numbers are :"<<result<<endl;
	return 0;
} 
