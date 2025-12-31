#include <stdio.h>
// Name Aastha Jha
// erp 10020
int main() {
    int a[50], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
// output
// Enter number of elements: 6
// Enter array elements:
// 8
// 6
// 5
// 3
// 2
// 1
// Maximum = 8
// Minimum = 1

