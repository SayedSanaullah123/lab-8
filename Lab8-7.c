#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5;  // number of pyramid rows

    for (i = 1; i <= rows; i++) {

        // --- First pyramid (stars) ---
        for (j = i; j < rows; j++)
            printf(" ");
        for (k = 1; k <= (2 * i - 1); k++)
            printf("*");
        
        printf("   |   ");  // separator between patterns

        // --- Second pyramid (numbers) ---
        for (j = i; j < rows; j++)
            printf(" ");
        for (k = 1; k <= (2 * i - 1); k++)
            printf("%d", k);
        
        printf("   |   ");  // separator

        // --- Third pyramid (letters) ---
        for (j = i; j < rows; j++)
            printf(" ");
        for (k = 0; k < (2 * i - 1); k++)
            printf("%c", 'A' + k);
        
        printf("\n");
    }

    return 0;
}

