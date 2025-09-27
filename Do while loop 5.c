#include <stdio.h>
int main() {
    int confirm;
    do {
        printf("Do you want to continue? (1=Yes, 0=No): ");
        scanf("%d", &confirm);
    } while(confirm != 1);
    printf("Confirmed!\n");
    return 0;
}