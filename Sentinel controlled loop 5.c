#include <stdio.h>

int main() {
    int deposit, balance = 0;

    printf("Enter deposit (0 to stop): ");
    scanf("%d", &deposit);

    while(deposit != 0) {
        balance += deposit;
        printf("Balance = %d\n", balance);
        scanf("%d", &deposit);
    }

    return 0;
}