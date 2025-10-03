#include <stdio.h>

int main() {
    int veg, fruits, milk, soap, shampoo;
    float total, cash;
    char again;

    do {
        printf("\nWhat do you want to purchase?\n");

        printf("Vegetable (54.5/kg): ");
        scanf("%d", &veg);

        printf("Fruits (120/kg): ");
        scanf("%d", &fruits);

        printf("Milk (90/pack): ");
        scanf("%d", &milk);

        printf("Soap (29.45/bar): ");
        scanf("%d", &soap);

        printf("Shampoo and Conditioner (140/bottle): ");
        scanf("%d", &shampoo);

        // calculate total
        total = (veg * 54.5) + (fruits * 120) + (milk * 90) + (soap * 29.45) + (shampoo * 140);

        printf("\nTotal purchase = %.2f\n", total);

        printf("Enter your cash: ");
        scanf("%f", &cash);

        if (cash >= total) {
            printf("Your change = %.2f\n", cash - total);
        } else {
            printf("Not enough money! You still owe %.2f\n", total - cash);
        }

        printf("\nDo you want to purchase again (Y/N)? ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("\nThank you for shopping!\n");

    return 0;
}