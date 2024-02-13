#include <iostream>
using namespace std;

int main(){
	
	double *p;
	double x= 45.25;
	
	p=&x;
	cout<<"value of p is:"<<*p<<endl;
	
	return 0;
}
