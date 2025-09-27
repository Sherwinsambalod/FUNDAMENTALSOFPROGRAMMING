#include <stdio.h>

int main() {
    int choice;

    printf("Menu: 1=Burger, 2=Fries, 3=Soda, 0=Exit\n");
    scanf("%d", &choice);

    while(choice != 0) {
        if(choice == 1) printf("You ordered Burger\n");
        else if(choice == 2) printf("You ordered Fries\n");
        else if(choice == 3) printf("You ordered Soda\n");
        else printf("Invalid choice\n");

        scanf("%d", &choice);
    }

    return 0;
}