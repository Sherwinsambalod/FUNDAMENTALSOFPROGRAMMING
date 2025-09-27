#include <stdio.h>
int main() {
    int score;
    for(int i = 1; i <= 5; i++) {
        printf("Enter score %d: ", i);
        scanf("%d", &score);
        printf("You entered: %d\n", score);
    }
    return 0;
}
