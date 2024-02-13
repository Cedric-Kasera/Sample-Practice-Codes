#include <stdio.h>

// Function to convert temperature from Celsius to Fahrenheit
double temp_conversion(double celsius) {
    double fahrenheit;
    fahrenheit = (celsius * 9) / 5 + 32;
    return fahrenheit;
}

int main() {
    double celsius, fahrenheit;
    int choice;

    // User prompt
    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Quit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &celsius);

        // Convert Celsius to Fahrenheit and display the result
        fahrenheit = temp_conversion(celsius);
        printf("%.2lf Celsius = %.2lf Fahrenheit\n", celsius, fahrenheit);
    }
    else if (choice == 2) {
        printf("Quitting the program...\n");
    }
    else {
        printf("Invalid choice. Please try again.\n");
    }

    return 0;
}
