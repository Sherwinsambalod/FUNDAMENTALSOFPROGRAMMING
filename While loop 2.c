#include <stdio.h>
int main() {
    int grade;
    printf("Enter grade (-1 to stop): ");
    scanf("%d", &grade);

    while(grade != -1) {
        printf("You entered: %d\n", grade);
        scanf("%d", &grade);
    }
    return 0;
}
