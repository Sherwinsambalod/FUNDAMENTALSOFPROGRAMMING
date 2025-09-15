#include <stdio.h>

int main() {
    int grade;

    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);

    switch (grade / 10) {
        case 10: // 100
        case 9:  // 90–99
            printf("Equivalent Grade: A\n");
            break;
        case 8:  // 80–89
            printf("Equivalent Grade: B\n");
            break;
        case 7:  // 70–79
            printf("Equivalent Grade: C\n");
            break;
        case 6:  // 60–0
            printf("Equivalent Grade: Failed\n");
            break;
        default:
            printf("Invalid input. Please enter 0–100 only.\n");
    }

    return 0;
}