#include <stdio.h>

void hollow_rhombus(int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i || i == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    hollow_rhombus(n);
    return 0;
}
