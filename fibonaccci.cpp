#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,c,i,n;
	cout<<"enter n value :";
	cin>>n;
	for(i=0;i<=n;i++){
		cout<<a<<" "<<endl;
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
