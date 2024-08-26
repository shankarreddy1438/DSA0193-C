#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter number :";
	cin>>a>>b;
	int gcd=1,i=1;
	do{
		if(a%i==0&&b%i==0){
			gcd=i;
		}
		i++;
	} while(i<=a&&i<b);
	cout<<"gcd is"<<gcd<<endl;
	return 0;
	}
