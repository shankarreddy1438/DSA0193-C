#include<iostream>
#include<cmath>
using namespace std;
class Triangle{
	public:
		int a,b,c;
		void setsides(int x,int y,int z){
			a=x;
			b=y;
			c=z;
		}
		void printperimeter(){
			int perimeter=a+b+c;
			cout<<"perimeter :"<<perimeter<<endl;
		}
		void printarea(){
			double s=a+b+c/2;
			double area=sqrt(s*(s-a)*(s-b)*(s-c));
			cout<<"area :"<<area<<endl;
		}
};
int main(){
	Triangle t;
	t.setsides(2,3,4);
	t.printperimeter();
	t.printarea();
	return 0;
}
