#include <stdio.h>

int main(){
	
	int scores[3][4] = {
        {85, 92, 78, 90},
        {88, 76, 95, 84},
        {90, 85, 88, 92}   
    };

    float average;
    int sum;
    int i, j;

    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 4; j++) {
            sum += scores[i][j];
        }
        average = (float)sum / 4;
        printf("Average score for class %d = %.2f\n", i + 1, average);
    }
	
	return 0;
}
