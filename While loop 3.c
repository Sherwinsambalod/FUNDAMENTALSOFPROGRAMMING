#include <stdio.h>
int main() {
    int borrowed = 0;
    while(borrowed < 5) {
        printf("Borrowed book %d\n", borrowed + 1);
        borrowed++;
    }
    return 0;
}