#include <iostream>
#include <math.h>
using namespace std;

double r1(int a, int b, int c){
	return (-b + pow((pow(b,2) - 4 * a * c), 0.5)) / 2;
}
double r2(int a, int b, int c){
	return (-b - pow((pow(b,2) - 4 * a * c), 0.5)) / 2;
}

int main(){
	int a = 8;
	int b = -15;
	int c = -10;
	
	int d = pow(b,2) - 4 * a * c;
	if (d > 0){
		cout << "Root 1 = " << r1(a,b,c) << endl << "Root 2 = " << r2(a,b,c) << endl;
	}
	else if(d == 0){
		int r = -b / (2 * a);
		cout << "Root = " << r << endl;
	}
	else if(d < 0){
		printf("The equation has no real roots.");
	}
}













