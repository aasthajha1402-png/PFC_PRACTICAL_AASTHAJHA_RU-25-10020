 #include <stdio.h>
// Name Aastha Jha 
// erp 10020
int main() {
    int a[10][10], r, c, i, j;
    int sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        sum = 0;
        for(j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
// output
// Enter rows and columns: 2 2
// Enter elements:
// 12 
// 34
// 56
// 34
// Sum of row 1 = 46
// Sum of row 2 = 90