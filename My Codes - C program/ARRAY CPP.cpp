#include <iostream>
using namespace std;

int main(){
	int i;
	int j;
	int numbers[2][3];
	
	cout<<"Enter 6 numbers:";
	 
	 //input the numbers with cin using for loop
for(i=0; i<2; ++i){
for(j=0; j<3; ++j)

	cin>>numbers[i][j];
}	 
    cout<<"The numbers are:"<<endl;
    
    //output the numbers using cout using for loop
for(i=0; i<2; ++i){
for(j=0; j<3; ++j)
     
     cout<<"number ["<<i<<"]["<<j<<"]"<<numbers[i][j]<<endl;




	
}    
	return 0;
}
