#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Declare variables

char player[10];
char player1[10];
char player2[10];
char place[10];
bool loopCheck = false;
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
            loopCheck = true;
            printf("\nYou are now living in Tempe. You now go to Arizona State University where you are studying to be a Software Engineer. You're friends are also at ASU studying the same subject.\n");
            printf("\nYou hear of a major party going on in a sorority house and %s wants to go.\n", player1);
            printf("\nBut %s wants to study for the Mid-Term tomorrow morning instead. Who do you want to go with?\n", player2);
            fgets(answer, 10, stdin);

            // The continuation of the Tempe storyline
            // Going to party
            if (strcmp(answer, player1) == 0)
            {
                printf("\nYou are going to the party with %s.", player1);
            }
            // Going to study
            else if (strcmp(answer, player2) == 0)
            {
                printf("\nYou are going to study with %s.", player2);
            }
            else
            {
                printf("\nI'm sorry, I didn't get that");
            }
        }

        // Avondale Storyline
        else if (strcmp(place, placeAvondale) == 0)
        {
            printf("\nYou are going to Avondale");
            loopCheck = true;
            printf("\nYou are now living in Avondale. You now go to Estrella Mountain Community College where you are studying for your associates and hopefully go to Grand Canyon Unvicersity to get your bachelors.\n");
            printf("\nYour friends want to go to Gateway Pavillions for a movie and play at Dave and Busters but you know theres a final coming up and you need to study and go to sleep early.\n");

            // The continuation of the Avondale storyline
            {
                while (loopCheck == false)
                {
                    printf("\nDo you want to go to the movies with your friends or study?\n");
                    fgets(answer, 10, stdin);

                    // Going to party
                    if (strcmp(answer, player1) == 0)
                    {
                        printf("\nYou are going to the party ");
                        loopCheck = true;
                    }
                }
            }
        }
        // Warning message to have user input correct choices
        else {
            printf("\nI'm sorry, I didn't get that");
        }
    }
    return 0;
}

typedef struct _storyLine {
    char* body;
    struct _storyLine* left;
    char* leftChoice;
    struct _storyLine* right;
    char* rightChoice;
} storyLine;


storyLine start;


int ArizonaTrail(storyLine* s) {
    printf("%s", s->body);
    fgets(place, 10, stdin);
    if (strcmp(place, s->leftChoice) == 0) {
        ArizonaTrail(s->left);
    }
    else if (strcmp(place, s->rightChoice) == 0) {
        ArizonaTrail(s->right);
    }
    else {
        printf("I don't know what you want man.\n");
    }
    return 0;
}

int main(int argc, char* argv[])
{
    storyLine tempe;
    tempe.body = "you are headed to tempe";
    storyLine avondale;
    avondale.body = "you are headed to tempe";

    start.body = "Welcome to Jeremy's Hijacked Arizona Trail.";
    start.leftChoice = placeTempe;
    start.rightChoice = placeAvondale;
    start.right = &avondale;
    start.left = &tempe;

    ArizonaTrail(&start);