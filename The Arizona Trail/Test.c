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

typedef struct _storyLine {
    char* body;
    struct _storyLine* left;
    char* tempeStory;
    struct _storyLine* right;
    char* avondaleStory;
} storyLine;


storyLine start;


int ArizonaTrail(storyLine* s) {
    printf("%s", s->body);
    fgets(place, 10, stdin);
    if (strcmp(place, s->tempeStory) == 0) {
        ArizonaTrail(s->left);
    }
    else if (strcmp(place, s->avondaleStory) == 0) {
        ArizonaTrail(s->right);
    }
    else {
        printf("I don't know what you want man.\n");
    }
    return 0;
}

int main(int argc, char* argv[])
{
    startGame();

    storyLine tempe;
    tempe.body = "you are headed to tempe";
    storyLine avondale;
    avondale.body = "you are headed to tempe";

    start.body = "\nNow you must choose where to start your journey, Tempe or Avondale:\n";
    start.tempeStory = placeTempe;
    start.avondaleStory = placeAvondale;
    start.right = &avondale;
    start.left = &tempe;

    ArizonaTrail(&start);
}