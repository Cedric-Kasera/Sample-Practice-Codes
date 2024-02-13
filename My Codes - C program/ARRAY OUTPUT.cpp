#include <iostream>
using namespace std;

int main(){
	
	int i;
	int j;
	int numbers [3][2]={{25, 51},{45, 95},{35, 70}};
	
	for(i=0; i<3; ++i){
		for(j=0; j<2; ++j){
			
		cout<<"numbers["<<i<<"]["<<j<<"]"<<numbers [i][j]<<endl;
		}
	

}
return 0;
}
