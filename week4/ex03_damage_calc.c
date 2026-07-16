#include <stdio.h>
#include <math.h>

int main() 
{
    int Player_Attack, Enemy_Defense, Hit_Number, base_damage, damage;

    printf("Enter Player Attack: ");
    scanf("%d", &Player_Attack);

    printf("Enter Enemy Defense: ");
    scanf("%d", &Enemy_Defense);

    printf("Enter Hit Number: ");
    scanf("%d", &Hit_Number);

    base_damage = Player_Attack - Enemy_Defense;

    if (Hit_Number % 5 == 0) 
    {
        damage = (int)ceil((float)base_damage * 1.5f);
        base_damage = damage;
    }
    if (Hit_Number % 5 == 0) {
        printf("\n=== COMBAT SIMULATOR ===\n");
        printf("Player Attack   : %d\n", Player_Attack);
        printf("Enemy Defense   : %d\n", Enemy_Defense);
        printf("Hit Number      : %d\n", Hit_Number);
        printf("Damage          : %d   *** CRITICAL HIT! x1.5 ***\n", base_damage);
    }
    else {
        printf("\n=== COMBAT SIMULATOR ===\n");
        printf("Player Attack   : %d\n", Player_Attack);
        printf("Enemy Defense   : %d\n", Enemy_Defense);
        printf("Hit Number      : %d\n", Hit_Number);
        printf("Damage          : %d   (Normal)\n", base_damage);
    }

    return 0;
}