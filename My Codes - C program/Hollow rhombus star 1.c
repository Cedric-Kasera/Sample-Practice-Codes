#include<stdio.h>
void printHollowRhombus(int n) {
    int i, j, space;

    // Print the top triangle of the rhombus
    for (i = 1; i <= n; i++) {
        for (space = n - i; space > 0; space--)
            printf(" ");

        for (j = 0; j < (2 * i - 1); j++)
            printf("*");

        printf("\n");
    }

    // Print the bottom triangle of the rhombus
    for (i = n - 1; i >= 1; i--) {
        for (space = n - i; space > 0; space--)
            printf(" ");

        for (j = 0; j < (2 * i - 1); j++)
            printf("*");

        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the rhombus: ");
    scanf("%d", &n);

    printHollowRhombus(n);

    return 0;
}
