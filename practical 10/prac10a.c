#include <stdio.h>
// Name aastha jha
// erp 10020
int main() {
    int a[10][10], r, c, i, j;
    int max, min;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = min = a[0][0];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] > max)
                max = a[i][j];
            if(a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
// output
// Enter rows and columns: 2 3
// Enter elements:
// 124
// 345
// 567
// 765
// 875
// 890
// Maximum element = 890
// Minimum element = 124