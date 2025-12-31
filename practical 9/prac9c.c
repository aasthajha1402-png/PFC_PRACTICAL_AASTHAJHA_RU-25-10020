#include <stdio.h>
// Name Aastha Jha
// erp 10020 
int main() {
    int a[50], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            sum += a[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
// output
// Enter number of elements: 5
// Enter array elements:
// 8
// 3
// 6
// 1
// 2
// Sum of even elements = 16
