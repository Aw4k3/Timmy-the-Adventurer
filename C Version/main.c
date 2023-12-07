#include <stdio.h>
#include <string.h>

struct Move {
    char name[16];
    float damage;
    int currentCooldown;
    int cooldown;
};

struct Character
{
    char name[16];
    float hp, attackMultiplyer, defense;
    struct Move* moves[3];
};

void PrintMoves(struct Character c, int numberOfMoves) {
    printf("Moves\n");
    for (int i = 0; i < numberOfMoves; i++) printf("Name: %s\nDamage: %f\nCooldown: %d (%d)", c.moves[i]->name, c.moves[i]->damage, c.moves[i]->cooldown, c.moves[i]->currentCooldown);
    
}

int main()
{
    struct Move timmysMoves[3] = {
        { "Slap", 4, 0, 0 },
        { "Stab", 7, 0, 1 },
        { "Yeet", 13, 0, 4 }
    };

    struct Move bossmansMoves[3] = {
        { "Spilled Drink", 3, 0, 0 },
        { "Too Much Salt", 6, 0, 1 },
        { "Soggy Chips", 16, 0, 6 }
    };

    struct Character timmy = { "Timmy", 25, 1, 6, timmysMoves };
    struct Character bossman = { "Bossman", 50, 1, 8, bossmansMoves };

    while (timmy.hp > 0)
    {
        /*
         * Print who's turn it is
         * Display moves if Timmy
         * Calculate damage dealt and hp
         * next round
        */

       printf("Current Match: \nTimmy: %fhp | Bossman: %fhp\n", timmy.hp, bossman.hp);
       printf("----- Timmy's Turn -----\n");
       PrintMoves(timmy, sizeof(timmy.moves)/sizeof(Move));
       scanf("%d");
    }

    return 0;
}
