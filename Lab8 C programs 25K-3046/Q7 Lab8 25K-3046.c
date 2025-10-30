#include <stdio.h>

int main() {
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++) {

        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        for (j = i; j < n; j++)
            printf(" ");

        printf("  |  ");

        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("%d", j);
        for (j = i; j < n; j++)
            printf(" ");

        printf("  |  ");

        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("%c", 'A' + j - 1);
        for (j = i; j < n; j++)
            printf(" ");

        printf("\n");
    }

    return 0;
}
