#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//variables

char name[10];
char name1[10];
char name2[10];
char place[10];

int main()
{
    //Here I am introducing the game to the players
    printf("Welcome to The Arizona Trail. Here you will type in your choices and those choices will affect the outcome of your story\n");

    // Here I grab the main players name
    printf("\nWhat's your name?\n");
    fgets(name, 10, stdin);
    printf("Hi there, %s\n", name);

    // Next I grab their 2 companions
    printf("\nNext, name 2 people you want to bring on your journey. Who is the first companion?\n");
    fgets(name1, 10, stdin);
    printf("You have chosen %s\n", name1);

    printf("\nAnd the second companion?\n");
    fgets(name2, 10, stdin);
    printf("You have chosen %s\n", name2);

    bool i = false;
    char placeTempe[10] = "Tempe";
    char placeAvondale[10] = "Avondale";

    while (i == false) {
        printf("\nNow you must choose where to start your journey, Tempe or Avondale:");
        fgets(place, 10, stdin);

    if (strcmp(place, placeTempe) == 0)
    {
        printf("\nYou are heading to Tempe");
        i = true;
    }
    else if (strcmp(place, placeAvondale) == 0)
    {
        printf("\nYou are going to Avondale");
        i = true;
    }
    else {
        printf("\nYou fucked up hoe try to spell correctly");
    }
}
    return 0;
}


