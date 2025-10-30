#include <stdio.h>

int main() {
    int rows = 5, cols = 5;
    int studentCount = 0, emptyCount = 0;

    printf("Classroom Seating Chart:\n");
    printf("=========================\n");
    printf("(x = Student, o = Empty)\n\n");

    int i,j;
    for (i = 0; i < rows; i++) {
        printf("Row %d  ", i + 1);
        for (j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0) {
                printf("x ");
                studentCount++;
            } else {
                printf("o ");
                emptyCount++;
            }
        }
        printf("\n");
    }

    int totalDesks = rows * cols;

    printf("\nSummary:\n");
    printf("Students seated: %d\n", studentCount);
    printf("Empty desks: %d\n", emptyCount);
    printf("Total desks: %d\n", totalDesks);

    return 0;
}

