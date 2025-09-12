#include <stdio.h>

int main() {
int grade;

printf("Enter grade: ");
scanf("%d", &grade);

if (grade >= 75 && grade <= 100) {
printf("Passed\n");
}
else if (grade >= 50 && grade <= 74) {
printf("Failed\n");
}
else {
printf("Invalid\n");
}

return 0;
}