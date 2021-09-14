#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//declare variables

char player[10];
char player1[10];
char player2[10];
char place[10];

int main(int argc, char *argv[])
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

    // Creating a loop to make sure user can only input exactly what is needed to continue the story
    bool i = false;
    char placeTempe[10] = "Tempe\n";
    char placeAvondale[10] = "Avondale\n";

    while (i == false) {
        printf("\nNow you must choose where to start your journey, Tempe or Avondale:");
        fgets(place, 10, stdin);

        //Tempe Storyline
    if (strcmp(place, placeTempe) == 0)
    {
        printf("\nYou are heading to Tempe");
        i = true;

        // The continuation of the Tempe storyline
        if (strcmp(place, placeTempe) == 0)
        {
            printf("\nYou are now living in Tempe. You now go to Arizona State University where you are studying to be a Software Engineer. You're friends are also at ASU studying the same subject.\n");
            printf("\nYou hear of a major party going on in a sorority house.\n");
        }
    }
        //Avondale Sotryline
    else if (strcmp(place, placeAvondale) == 0)
    {
        printf("\nYou are going to Avondale");
        i = true;

        // The continuation of the Avondale storyline
        if (strcmp(place, placeAvondale) == 0)
        {
            printf("\nYou are now living in Avondale. You now go to Estrella Mountain Community College where you are studying for your associates and hopefully go to Grand Canyon Unvicersity to get your bachelors.\n");
            printf("\nYour friends want to go to Gateway Pavillions for a movie\n");
        }
    }
        //Warning message to have user input correct choices
    else {
        printf("\nI'm sorry, I didn't get that");
    }
}
    return 0;
}

