#include <iostream>
using namespace std;

int main(){
	//number of elements
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	
	//input the elements
	int series[n];
	cout << "Enter the elements: ";
	for(int i = 0; i < n; i++){
		cin >> series[i];
	}
	
	//check if elements are consecutive
	for(int i = 1; i < n; i++){
		if(series[i] == series[i-1]+1 || series[i-1]-1){
			cout << "The elements are consecutive";
			3 //Exit the program;
		}
		else{
			cout << "The elements are not consecutive";
		}
	}
		
	
}
