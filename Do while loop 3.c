#include <stdio.h>
int main() {
    int choice;
    do {
        printf("Menu: 1=Burger, 2=Fries, 0=Exit\n");
        scanf("%d", &choice);
        if(choice == 1) printf("You ordered Burger\n");
        else if(choice == 2) printf("You ordered Fries\n");
    } while(choice != 0);
    return 0;
}