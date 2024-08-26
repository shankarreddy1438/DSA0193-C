#include<iostream>
using namespace std;
int main(){
	int num,i,fact=1;
	cout<<"enter number :";
	cin>>num;
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	cout<<"factorial of "<< num <<" is "<<fact<<endl;
	return 0;
}
