#include <stdio.h>

int main() {
    int temp[4][4] = {
        {12, 15, 10, 9},
        {11, 13, 12, 13},
        {14, 13, 9, 12},
        {16, 11, 10, 8}};

    printf("Cold spots found:\n");

    int i,j;
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            int current = temp[i][j];
            int isCold = 1;

        
            if (i > 0 && temp[i - 1][j] <= current)
                isCold = 0;

    
            if (i < 3 && temp[i + 1][j] <= current)
                isCold = 0;

            
            if (j > 0 && temp[i][j - 1] <= current)
                isCold = 0;

            
            if (j < 3 && temp[i][j + 1] <= current)
                isCold = 0;

            if (isCold) {
                printf("- At position (%d,%d) with temperature %d°C\n", i, j, current);
            }
        }
    }

    return 0;
}

