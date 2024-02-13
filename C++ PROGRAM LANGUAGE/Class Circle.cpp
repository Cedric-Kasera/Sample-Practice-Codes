#include <iostream>

using namespace std;

class Circle {
    private:
    	double radius;
    public:
    	
    	~Circle(){
		}
    	
    	void setRad(double rad){
    		radius = rad;
		}
		
		double getRad(){
			return radius;
		}
		
		double area(){
			return 3.142 * getRad() * getRad();
		}
		
		double perimeter(){
			return 3.142 * getRad() * 2;
		}
		
		void display() {
			cout << "Radius = " << getRad() << endl;
			cout << "Area = " << area() << "\n";
			cout << "Perimeter = " << perimeter() << endl;
		}
};

int main(){
	Circle c;
	double rad;
	cout << "Enter a value = ";
	cin >> rad;
	c.setRad(rad);
	c.display();
}
