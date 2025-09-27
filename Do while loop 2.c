#include <stdio.h>
int main() {
    int num;
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
    } while(num != 0);
    return 0;
}