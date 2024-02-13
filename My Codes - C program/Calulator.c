#include <stdio.h>

// Function to add two numbers
float add(float num1, float num2) {
   return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
   return num1 - num2;
}

// Function to multiply two numbers
float multiply(float num1, float num2) {
   return num1 * num2;
}

// Function to divide two numbers
float divide(float num1, float num2) {
   // If the divisor is 0, then the function returns a value of NaN
   if(num2 == 0) {
      return 0/0;
   }
   return num1 / num2;
}

int main() {
   char operator;
   float num1, num2;
   
   printf("Enter the first number: ");
   scanf("%f", &num1);
   
   printf("Enter the second number: ");
   scanf("%f", &num2);
   
   printf("Enter the operator (+, -, *, /): ");
   scanf(" %c", &operator);
   
   switch(operator) {
      case '+':
         printf("%.2f + %.2f = %.2f", num1, num2, add(num1, num2));
         break;
         
      case '-':
         printf("%.2f - %.2f = %.2f", num1, num2, subtract(num1, num2));
         break;
         
      case '*':
         printf("%.2f * %.2f = %.2f", num1, num2, multiply(num1, num2));
         break;
         
      case '/':
         printf("%.2f / %.2f = %.2f", num1, num2, divide(num1, num2));
         break;
         
      // If the operator is other than +, -, *, /, then the function prints an error message
      default:
         printf("Error! Invalid operator.");
         break;
   }
   
   return 0;
}