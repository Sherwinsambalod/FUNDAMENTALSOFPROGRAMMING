#include <stdio.h>

int main() {
    int balance = 1000, withdraw;

    printf("Enter amount (0 to exit): ");
    scanf("%d", &withdraw);

    while(withdraw != 0) {
        if(withdraw <= balance) {
            balance -= withdraw;
            printf("Balance = %d\n", balance);
        } else {
            printf("Not enough balance!\n");
        }
        scanf("%d", &withdraw);
    }

    return 0;
}