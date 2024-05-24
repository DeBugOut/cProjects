//streetFighterGame.c
//A streetfighter simulation game

#include <stdio.h>

// Define the fighter structure
struct fighter {
    int attack;
    double health;
    char attack_command;
};

// Function to initialize a fighter
void initialize_fighter(struct fighter *f, int number) {
    printf("Enter Fighter %d's attack power (1-10): ", number);
    scanf("%d", &f->attack);
    printf("Enter an ascii character for Fighter %d's attack command: ", number);
    scanf(" %c", &f->attack_command);
    f->health = 50.0;
}

// Function to print the health of both fighters
void print_health(struct fighter f1, struct fighter f2) {
    printf("Fighter 1's health: %0.1lf\n", f1.health);
    printf("Fighter 2's health: %0.1lf\n\n", f2.health);
}

int main() {
    struct fighter fighter1, fighter2;
    char command;
    
    printf("Welcome to Street Fighter!\n\n");
    
    // Initialize fighters
    initialize_fighter(&fighter1, 1);
    printf("\n");
    initialize_fighter(&fighter2, 2);
    
    printf("\nFIGHT!\n\n");
    
    while (fighter1.health > 0 && fighter2.health > 0) {
        // Fighter 1 attack
        printf("Fighter 1, press %c to attack: ", fighter1.attack_command);
        scanf(" %c", &command);
        if (command == fighter1.attack_command) {
            printf("Fighter 1 attacks!\n");
            if (fighter1.health < 25.0) {
                fighter2.health -= fighter1.attack * 1.5;
            } else {
                fighter2.health -= fighter1.attack;
            }
        }
        
        // Fighter 2 attack
        printf("Fighter 2, press %c to attack: ", fighter2.attack_command);
        scanf(" %c", &command);
        if (command == fighter2.attack_command) {
            printf("Fighter 2 attacks!\n");
            if (fighter2.health < 25.0) {
                fighter1.health -= fighter2.attack * 1.5;
            } else {
                fighter1.health -= fighter2.attack;
            }
        }
        
        // Print health status
        print_health(fighter1, fighter2);
    }
    
    // Determine the winner
    if (fighter1.health <= 0 && fighter2.health <= 0) {
        printf("It's a draw!\n");
    } else if (fighter1.health <= 0) {
        printf("Fighter 2 wins!\n");
    } else {
        printf("Fighter 1 wins!\n");
    }
    
    printf("GAME OVER\n");
    
    return 0;
}
