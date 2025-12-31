#include <stdio.h>

// Name: Aastha Jha
// ERP: 10020

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 3, y = 5;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d", x, y);

    return 0;
}
// Before swapping: x = 3, y = 5
// After swapping: x = 5, y = 3
