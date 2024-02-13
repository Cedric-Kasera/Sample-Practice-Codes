#include <stdio.h>

// Function to convert temperature from Celsius to Fahrenheit
double temp_conversion(double celsius) {
    double fahrenheit;
    fahrenheit = (celsius * 9) / 5 + 32;
    return fahrenheit;
}

int main() {
    double celsius, fahrenheit;
    	
    	//User prompt
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &celsius);

        // Convert Celsius to Fahrenheit and display the result
        fahrenheit = temp_conversion(celsius);
        printf("%.2lf Celsius = %.2lf Fahrenheit\n", celsius, fahrenheit);
    
    
    return 0;
}
