#include <iostream>

using namespace std;

class Rectangle {
	private:
		double length;
		double width;
	public:
		void setLen(double len){
			length = len;
		}
		
		double getLen(){
			return length;
		}
		
		void setWid(double wid){
			width = wid;
		}
		
		double getWid(){
			return width;
		}
		
		double area(){
			return getLen() * getWid();
		}
		 double perimeter(){
		 	return 2 * (getLen() + getWid());
		}
		
		void display(){
			cout << "Length = " << getLen() << endl;
			cout << "Width = " << getWid() << endl;
			cout << "Area = " << area() << endl;
			cout << "Perimeter = " << perimeter() << endl;
		}
};

int main(){
	Rectangle r;
	r.setLen(7);
	r.setWid(7);
	r.display();
}




