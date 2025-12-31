#include <stdio.h>
// Name aastha jha
// erp 10020
int main() {
    int a[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}
// output
// Enter number of elements: 5
// Enter array elements:
// 7
// 9
// 0
// 6
// 8
// Reversed array:
// 8 6 0 9 7
