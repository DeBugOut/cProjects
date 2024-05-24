#include <stdio.h>

#define MAX_HEALTH 50.0
#define MAX_ATTACK 10

struct fighter {
    int attack;
    double health;
    char attack_command;
};

double calculate_damage(double health, int attack) {
    if (health <= MAX_HEALTH / 2)
        return attack * 1.5;
    else
        return attack;
}

int main(void) {
    struct fighter fighter1, fighter2;
    char command;

    printf("Welcome to Street Fighter!\n");

    ////////////////////////////////////////////////////////////////////////////
    ///////////////////////// Fighter 1 Creation ///////////////////////////////
    ////////////////////////////////////////////////////////////////////////////
    printf("Enter Fighter 1's attack power (1-10): ");
    scanf("%d", &fighter1.attack);
    while (fighter1.attack < 1 || fighter1.attack > 10){
        printf("Invalid input. Enter fighter 1's attack power (1-10): ");
        scanf("%d", &fighter1.attack);
    }
    fighter1.health = MAX_HEALTH;
    printf("Enter an ASCII character for Fighter 1's attack command: ");
    scanf(" %c", &fighter1.attack_command); // Note the space before %c

    ////////////////////////////////////////////////////////////////////////////
    ///////////////////////// Fighter 2 Creation ///////////////////////////////
    ////////////////////////////////////////////////////////////////////////////
    printf("Enter Fighter 2's attack power (1-10): ");
    scanf("%d", &fighter2.attack);
    while (fighter2.attack < 1 || fighter2.attack > 10){
        printf("Invalid input. Enter fighter 1's attack power (1-10): ");
        scanf("%d", &fighter2.attack);
    }
    fighter2.health = MAX_HEALTH;
    printf("Enter an ASCII character for Fighter 2's attack command: ");
    scanf(" %c", &fighter2.attack_command); // Note the space before %c

    ////////////////////////////////////////////////////////////////////////////
    //////////////////////////////// Fight Loop ////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////
    printf("\nFIGHT!\n\n");

    while (fighter1.health > 0 && fighter2.health > 0) {
        //Fighter 1 attack:
        printf("Fighter 1, press %c to attack: ", fighter1.attack_command);
        scanf(" %c", &command);
        if (command == fighter1.attack_command) {
            printf("Fighter 1 attacks!\n");
            fighter2.health -= calculate_damage(fighter2.health, fighter1.attack);
        }

        if (fighter2.health <= 0) break;

        //fighter 2 attack: 
        printf("Fighter 2, press %c to attack: ", fighter2.attack_command);
        scanf(" %c", &command);
        if (command == fighter2.attack_command) {
            printf("Fighter 2 attacks!\n");
            fighter1.health -= calculate_damage(fighter1.health, fighter2.attack);
        }
        if (fighter1.health <= 0) break;

        printf("Fighter 1's health: %.1f\n", fighter1.health);
        printf("Fighter 2's health: %.1f\n", fighter2.health);
    }

    ////////////////////////////////////////////////////////////////////////////
    ////////////////////////////// Fight Results ///////////////////////////////
    ////////////////////////////////////////////////////////////////////////////
    if (fighter1.health <= 0 && fighter2.health <= 0) {
        printf("\nIt's a draw!\n");
    } else if (fighter1.health <= 0) {
        printf("\nFighter 2 wins!\n");
    } else if (fighter2.health <= 0) {
        printf("\nFighter 1 wins!\n");
    }

    printf("GAME OVER\n");
    return 0;
}