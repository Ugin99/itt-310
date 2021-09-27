#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "Recap.h"

// Declare variables
bool loopCheck = false;
bool loopCheck2 = false;
char placeTempe[10] = "Tempe";
char placeAvondale[10] = "Avondale";

void startGame() // Block to grab characters names for the story
{
    //Here I am introducing the game to the players
    printf("Welcome to The Arizona Trail. Here you will type in your choices and those choices will affect the outcome of your story\n");

    // Here I grab the main players name
    printf("\nWhat's your name?\n");
    fgets(recap.player, 10, stdin);
    recap.player[strcspn(recap.player, "\n")] = 0;
    printf("Hi there, %s\n", recap.player);

    // Next I grab their 2 companions/friends
    printf("\nNext, name 2 people you want to bring on your journey. Who is the first companion?\n");
    fgets(recap.player1, 10, stdin);
    recap.player1[strcspn(recap.player1, "\n")] = 0;
    printf("You have chosen %s\n", recap.player1);

    printf("\nAnd the second companion?\n");
    fgets(recap.player2, 10, stdin);
    recap.player2[strcspn(recap.player2, "\n")] = 0;
    printf("You have chosen %s\n", recap.player2);

    printf("\nYour friends %s and %s will now join your adventure\n", recap.player1, recap.player2);
}


int main(int argc, char* argv[])
{
    startGame();

    // Creating a loop to make sure user can only input exactly what is needed to continue the story
    while (loopCheck == false)
    {
        printf("\nNow you must choose where to start your journey, Tempe or Avondale:");
        fgets(recap.place, 10, stdin);
        recap.place[strcspn(recap.place, "\n")] = 0;

        // Tempe Storyline
        if (strcmp(recap.place, placeTempe) == 0)
        {
            printf("\nYou are heading to Tempe");
            loopCheck = true;
            printf("\nYou are now living in Tempe. You now go to Arizona State University where you are studying to be a Software Engineer. You're friends are also at ASU studying the same subject.\n");
            printf("\nYou hear of a major party going on in a sorority house and %s wants to go.\n", recap.player1);
            printf("\nBut %s wants to study for the Mid-Term tomorrow morning instead.\n", recap.player2);

            while (loopCheck2 == false)
            {
                printf("\nWho do you want to go with?\n");
                fgets(recap.answer.tempeAnswer, 10, stdin);
                recap.answer.tempeAnswer[strcspn(recap.answer.tempeAnswer, "\n")] = 0;
                // The continuation of the Tempe storyline
                // Going to party
                if (strcmp(recap.answer.tempeAnswer, recap.player1) == 0)
                {
                    printf("\nYou are going to the party with %s.", recap.player1);
                    loopCheck2 = true;
                }
                // Going to study
                else if (strcmp(recap.answer.tempeAnswer, recap.player2) == 0)
                {
                    printf("\nYou are going to study with %s.", recap.player2);
                    loopCheck2 = true;
                }
                else
                {
                    printf("\nI'm sorry, I didn't get that. Please try again.");
                }
            }
        }

        // Avondale Storyline
        else if (strcmp(recap.place, placeAvondale) == 0)
        {
            printf("\nYou are going to Avondale");
            loopCheck = true;
            printf("\nYou are now living in Avondale. You now go to Estrella Mountain Community College where you are studying for your associates and hopefully go to Grand Canyon Unvicersity to get your bachelors.\n");
            printf("\n%s want to go to Gateway Pavillions for a movie and play at Dave and Busters but %s know theres a final coming up and you need to study and go to sleep early.\n", recap.player1, recap.player2);

            // The continuation of the Avondale storyline
            {
                while (loopCheck2 == false)
                {
                    printf("\nDo you want to go to the movies with your friends or study?\n");
                    fgets(recap.answer.avondaleAnswer, 10, stdin);
                    recap.answer.avondaleAnswer[strcspn(recap.answer.avondaleAnswer, "\n")] = 0;

                    // Going to party
                    if (strcmp(recap.answer.avondaleAnswer, recap.player1) == 0)
                    {
                        printf("\nYou are going to the movies with %s\n", recap.player1);
                        loopCheck2 = true;
                    }

                    else if (strcmp(recap.answer.avondaleAnswer, recap.player2) == 0)
                    {
                        printf("\nYou are going to study with %s.", recap.player2);
                        loopCheck2 = true;
                    }

                    else
                    {
                        printf("\nI'm sorry, I didn't get that. Please try again.");
                    }
                }
            }
        }
        // Warning message to have user input correct choices
        else {
            printf("\nI'm sorry, I didn't get that. Please try again.");
        }
    }
    return 0;
}