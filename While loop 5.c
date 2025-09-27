#include <stdio.h>
int main() {
    int donation, total = 0;
    while(total < 1000) {
        printf("Enter donation: ");
        scanf("%d", &donation);
        total += donation;
    }
    printf("Target reached! Total = %d\n", total);
    return 0;
}