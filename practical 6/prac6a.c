#include <stdio.h>
//Name - Aastha Jha
//ERP ID - RU -25-10020

int main() {
    int pin = 1234, enteredPin, attempts = 0;

    while (attempts < 3) {
        printf("Enter ATM PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("Authentication Successful\n");
            return 0;
        } else {
            printf("Incorrect PIN\n");

        attempts++;
    }

    printf("Card Blocked. Too many incorrect attempts\n");
    }
    return 0;
}
// output -
// Enter ATM PIN: 1243
// Incorrect PIN
// Card Blocked. Too many incorrect attempts
// Enter ATM PIN: 5432
// Incorrect PIN
// Card Blocked. Too many incorrect attempts
// Enter ATM PIN: 1234
// Authentication Successful
