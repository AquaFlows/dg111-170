#include <stdio.h>

int main() {
    int gold = 1000;
    int choice;
    int price;
    char name[30];
    char bonus[20];

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n\n", gold);
    printf("1. Health Potion  - 50 Gold  (+50 HP)\n");
    printf("2. Mana Potion    - 80 Gold  (+30 MP)\n");
    printf("3. Iron Sword     - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor  - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n\n");

    printf("Select item: ");
    scanf("%d", &choice);
    printf("\n");

    price = 0;

    switch (choice) {
        case 1:
            price = 50;
            sprintf(name, "Health Potion");
            sprintf(bonus, "+50 HP");
            break;
        case 2:
            price = 80;
            sprintf(name, "Mana Potion");
            sprintf(bonus, "+30 MP");
            break;
        case 3:
            price = 500;
            sprintf(name, "Iron Sword");
            sprintf(bonus, "+20 ATK");
            break;
        case 4:
            price = 300;
            sprintf(name, "Leather Armor");
            sprintf(bonus, "+15 DEF");
            break;
        case 5:
            printf("Thank you for shopping! Goodbye.\n");
            return 0;
        default:
            printf("Invalid choice.\n");
            return 0;
    }

    printf("=== Purchase ===\n");

    switch (gold < price) {
        case 1:
            printf("Not enough Gold!\n");
            return 0;
    }

    gold = gold - price;

    printf("%s: %d Gold\n", name, price);
    printf("Remaining : %d Gold\n", gold);
    printf("Stat Bonus: %s\n", bonus);
    printf("\nItem purchased successfully!\n");

    return 0;
}