#include <stdio.h>
int main() {
    int save, total = 0;
    do {
        printf("Enter savings: ");
        scanf("%d", &save);
        total += save;
    } while(total < 500);
    printf("Goal reached! Total = %d\n", total);
    return 0;
}