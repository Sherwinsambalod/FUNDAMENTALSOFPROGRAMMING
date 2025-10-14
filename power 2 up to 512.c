#include <stdio.h>

int main() {
    int i, num = 1;
    for (i = 1; num <= 512; i++) {
        printf("%d\n", num);
        num = num * 2;
    }
    return 0;
}