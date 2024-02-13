#include <iostream>
using namespace std;

class Paycheck{
	private:
		double bsalary;
	
	public:
		void setBSalary(double s){
			bsalary = s;
		}
		double getBSalary(){
			return bsalary;
		}
		
		char job(){
			if(bsalary >= 60000 && bsalary <= 80000){
				return 'L'; // L is for Lecturer
			}
			else if(bsalary >= 81000 && bsalary <= 100000){
				return 'S'; // SL is for senior lecturer
			}
			else if(bsalary >= 101000 && bsalary <= 120000){
				return 'A'; // AP is for associate professor
			}
			else if(bsalary >= 121000 && bsalary <= 150000){
				return 'P'; // P is for professor
			}
			else if(bsalary < 60000 && bsalary > 150000){
				return 'N'; // If none of the above is true
			}
		}
		
		double hallowance(){
			if (job() == 'L'){
				return 40000;
			}
			else if (job() == 'S'){
				return 45000;
			}
			else if (job() == 'A'){
				return 50000;
			}
			else if (job() == 'P'){
				return 60000;
			}
			else if (job() == 'N'){
				return 0;
			}
		}
		
		double mallowance(){
			if (job() == 'L'){
				return 8000;
			}
			else if (job() == 'S'){
				return 10000;
			}
			else if (job() == 'A'){
				return 12000;
			}
			else if (job() == 'P'){
				return 15000;
			}
			else if (job() == 'N'){
				return 0;
			}
		}
		
		double allowances(){
			return hallowance() + mallowance();
		}
		
		double gsalary(){
			return getBSalary() + hallowance() + mallowance();
		}
		
		double deductions(){
			return (0.16 * getBSalary()) + 3000 + 2000 + 5000;
		}
		
		double netsalary(){
			return gsalary() + deductions();
		}
		
		void display(){
			cout << "Paycheck" << "\n\n";
			cout << "Basic Salary = " << getBSalary() << endl;
			cout << "Allowances = " << allowances() << endl;
			cout << "Gross Salary = " << gsalary() << endl;
			cout << "Deductions = " << deductions() << "\n\n";
			cout << "Net Salary = " << netsalary() << endl;
		}
		
};

int main(){
	Paycheck p;
	double s;
	cout << "Enter the basic salary = ";
	cin >> s;
	
	p.display();
}




