//Atm pin authentication
//Name- Ankit kumar prajapati 
// ERP - 10215
#include <stdio.h>

int main() {
    int pin, secretPin = 1234;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if(pin == secretPin)
        printf("Access Granted");
    else
        printf("Invalid PIN");

    return 0;
}
