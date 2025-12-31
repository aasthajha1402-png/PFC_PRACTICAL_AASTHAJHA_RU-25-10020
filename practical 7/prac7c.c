#include <stdio.h>
// Name Aastha Jha
// erp 10020
int main() {
    int i, j;
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++)
            printf("%c", 64 + j);
        printf("\n");
    }
    return 0;
}
// output
// A
// AB
// ABC
// ABCD
