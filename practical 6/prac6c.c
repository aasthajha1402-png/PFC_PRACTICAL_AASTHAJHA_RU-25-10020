#include <stdio.h>
// Name Aastha Jha
// erp 10020
int main() {
    int n, i, sum = 0;
    printf("Enter limit: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;
        sum += i;
    }
    printf("Sum of even numbers = %d", sum);
    return 0;
}
// Output
// Enter limit: 23
// Sum of even numbers = 132
