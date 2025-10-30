#include <stdio.h>

int main() {
    const int ROWS = 5;
    const int COLS = 5;
    int students = 0;
    int empties = 0;
    int r, c;

    printf("Classroom Seating Chart:\n");
    printf("========================\n");
    printf("(x = Student, o = Empty)\n\n");

    for (r = 0; r < ROWS; r++) {
        printf("Row %d ", r + 1);
        for (c = 0; c < COLS; c++) {
            char seat = ((r + c) % 2 == 0) ? 'x' : 'o';
            if (seat == 'x') students++;
            else empties++;
            printf("%c", seat);
            if (c < COLS - 1) printf(" ");
        }
        printf("\n");
    }

    printf("\nSummary:\n");
    printf("Students seated: %d\n", students);
    printf("Empty desks: %d\n", empties);
    printf("Total desks: %d\n", ROWS * COLS);
    
	return 0;
}
