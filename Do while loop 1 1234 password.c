#include <stdio.h>
int main() {
    int pass;
    do {
        printf("Enter password: ");
        scanf("%d", &pass);
    } while(pass != 1234);
    printf("Access granted!\n");
    return 0;
}