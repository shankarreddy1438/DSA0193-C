#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter number :";
	cin>>n;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	cout<<"sum of digits is :"<< sum<<endl;
	return 0;
} 
