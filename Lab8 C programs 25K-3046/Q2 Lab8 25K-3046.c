#include <stdio.h>

int main(){
	int year1[12] = {12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15};
    int year2[12] = {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16};
    int i, j;

    for (i = 1; i <= 2; i++) {
        printf("\n");
        for (j = 0; j < 12; j++) {
            if (i == 1)
                printf("Year %d, Month %d: %d photos\n", i, j + 1, year1[j]);
            else
                printf("Year %d, Month %d: %d photos\n", i, j + 1, year2[j]);
        }
    }
	return 0;
}
