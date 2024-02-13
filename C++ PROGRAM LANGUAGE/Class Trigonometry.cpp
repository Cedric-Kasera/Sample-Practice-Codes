#include <iostream>
#include <math.h>

using namespace std;

#define PI 3.142
class Trig{
	private:
		double deg;
	public:
		void setDeg(double d){
			if(d>=0 && d<=180){
				deg = d;
			}
		}
		
		double getDeg(){
			return deg;
		}
		
		double radians(){
			return deg / 180 * PI;
		}
		
		int factorial(int x){
			int fact = 1;
			while (x > 1){
				fact *= x;
				x--;
			}
			return fact;
		}
		
		double cosx(){
			int n = 0;
			double cosx = 0.0;
			while (n < 10){
				int denom = 2 * n;
				cosx += pow(-1,n) * pow(radians(),denom) / factorial(denom);
				n++;
			}
			return cosx;
		}
		
		double sinx(){
			int n = 0;
			double sinx = 0.0;
			while (n < 10){
				int denom = 2 * n + 1;
				sinx += pow (-1,n) * pow(radians(),denom) / factorial(denom);
				n++;
			}
			return sinx;
		}
		
		double tanx(){
			return sinx() / cosx();
		}
		
		void display(){
			cout << "Angle x = " << getDeg() << endl;
			cout << "Angle in radians = " << radians() << endl;
			cout << "Cosine of x = " << cosx() << endl;
			cout << "Sine of x = " << sinx() << endl;
			cout << "Tangent of x = " << tanx() << endl;
		}
};

int main(){
	Trig t;
	double deg;
	cout << "Enter an angle = ";
	cin >> deg;
	t.setDeg(deg);
	t.display();
}


