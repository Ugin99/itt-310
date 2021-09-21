#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "avondale.h"
#include "tempe.h"

// Declare variables

char player[10];
char player1[10];
char player2[10];
char place[10];
bool loopCheck = false;
bool loopCheck2 = false;
char placeTempe[10] = "Tempe\n";
char placeAvondale[10] = "Avondale\n";
char answer[10];

void startGame() // Block to grab characters names for the story
{
    //Here I am introducing the game to the players
    printf("Welcome to The Arizona Trail. Here you will type in your choices and those choices will affect the outcome of your story\n");

    // Here I grab the main players name
    printf("\nWhat's your name?\n");
    fgets(player, 10, stdin);
    printf("Hi there, %s\n", player);

    // Next I grab their 2 companions/friends
    printf("\nNext, name 2 people you want to bring on your journey. Who is the first companion?\n");
    fgets(player1, 10, stdin);
    printf("You have chosen %s\n", player1);

    printf("\nAnd the second companion?\n");
    fgets(player2, 10, stdin);
    printf("You have chosen %s\n", player2);

    printf("\nYour friends %s and %s will now join your adventure\n", player1, player2);
}




int main(int argc, char* argv[])
{
    startGame();

    // Creating a loop to make sure user can only input exactly what is needed to continue the story
    while (loopCheck == false) 
    {
        printf("\nNow you must choose where to start your journey, Tempe or Avondale:");
        fgets(place, 10, stdin);

        // Tempe Storyline
        if (strcmp(place, placeTempe) == 0)
        {
            printf("\nYou are heading to Tempe");

            // The continuation of the Tempe storyline
			loopCheck = goToTempe(); 
        }
        // Avondale Storyline
        else if (strcmp(place, placeAvondale) == 0)
        {
            printf("\nYou are going to Avondale");
            loopCheck = goToAvondale();
        }
        // Warning message to have user input correct choices
        else {
            printf("\nI'm sorry, I didn't get that");
        }
        
    }
    return 0;
}

