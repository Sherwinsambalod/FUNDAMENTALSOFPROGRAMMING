#include <stdio.h>

int main() {
    int fact = 1;
    for(int n = 1; n <= 5; n++) {
        fact *= n;
    }
    printf("Factorial = %d", fact);
    return 0;
}