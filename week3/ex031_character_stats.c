#include <stdio.h>

int main() {

    char name[50];
    int player_hp;
    int player_attackpower;
    int player_defense;
    int player_level;


    printf("=== Create Character===\n");
    printf("Enter your Character Name: ");
    scanf("%s", name);

    printf("Enter your HP: ");
    scanf("%d", &player_hp);

    printf("Enter your Attack Power: ");
    scanf("%d", &player_attackpower);

    printf("Enter your Defense: ");
    scanf("%d", &player_defense);

    printf("Enter your Level: ");
    scanf("%d", &player_level);

    printf("\n=== Character Summary ===\n");
    printf("Name    :     %s\n", name);
    printf("HP      :     %d\n", player_hp);
    printf("ATK     :     %d\n", player_attackpower);
    printf("DEF     :     %d\n", player_defense);
    printf("Level   :     %d\n", player_level);
    return 0;
}