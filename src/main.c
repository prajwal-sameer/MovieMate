#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    srand(time(0));
    int randomIndex = rand() % 7;

    char romance[7][50] = {
        "Titanic", "The Notebook", "96",
        "DDLJ", "Devdas",
        "Kal Ho Na Ho", "Romeo and Juliet"
    };

    char horror[7][50] = {
        "The Conjuring", "Annabelle", "Insidious",
        "The Exorcist", "It", "The Nun", "Hereditary"
    };

    char scifi[7][50] = {
        "Interstellar", "Inception", "Avatar",
        "The Matrix", "Gravity", "Arrival",
        "Blade Runner"
    };

    char comedy[7][50] = {
        "3 Idiots", "Hangover", "Home Alone",
        "Superbad", "Jumanji",
        "PK", "Mr Bean"
    };

    char action[7][50] = {
        "Avengers", "John Wick", "Mission Impossible",
        "Die Hard", "Mad Max",
        "Gladiator", "Fast and Furious"
    };

    printf("\n🎬 MOVIE RECOMMENDATION SYSTEM 🎬\n");
    printf("1. Romance\n");
    printf("2. Horror\n");
    printf("3. Sci-Fi\n");
    printf("4. Comedy\n");
    printf("5. Action\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\nRecommended Movie: ");

    if (choice == 1)
        printf("%s\n", romance[randomIndex]);
    else if (choice == 2)
        printf("%s\n", horror[randomIndex]);
    else if (choice == 3)
        printf("%s\n", scifi[randomIndex]);
    else if (choice == 4)
        printf("%s\n", comedy[randomIndex]);
    else if (choice == 5)
        printf("%s\n", action[randomIndex]);
    else
        printf("Invalid Choice!\n");

    return 0;
}
