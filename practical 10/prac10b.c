#include <stdio.h>
// Name aastha jha 
// erp 10020
int main() {
    int a[10][10], n, i, j;
    int sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
// output
// Enter order of square matrix: 3 3
// Enter elements:
// 124
// 567
// 345
// 789
// 1234
// 987
// 567
// 457
// Sum of diagonal elements = 1249