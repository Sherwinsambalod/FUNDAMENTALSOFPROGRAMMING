#include <stdio.h>
int main() {
    int pin, tries = 0;
    while(tries < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);
        if(pin == 1234) {
            printf("Access granted!\n");
            break;
        }
        printf("Wrong PIN!\n");
        tries++;
    }
    return 0;
}