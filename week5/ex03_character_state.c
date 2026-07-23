#include <stdio.h>

int main(void) {
    int max_hp;
    int damage;
    int poisoned_input;
    int attack_count;
    _Bool is_poisoned;
    int hp;

    printf("Max HP: ");
    scanf("%d", &max_hp);

    printf("Damage Taken: ");
    scanf("%d", &damage);

    printf("Poisoned (0/1): ");
    scanf("%d", &poisoned_input);
    is_poisoned = poisoned_input;
    printf("Attack Count: ");
    scanf("%d", &attack_count);

    hp = max_hp - damage;
    if (hp < 0) {
        hp = 0;
    }

    printf("\n=== Character Status ===\n");

    if (hp <= 0) {
        printf("State: DEAD\n");
    } else if ((float)hp / max_hp < 0.25) {
        printf("State: CRITICAL\n");
    } else if (is_poisoned == 1) {
        printf("State: POISONED\n");
    } else {
        printf("State: NORMAL\n");
    }

}