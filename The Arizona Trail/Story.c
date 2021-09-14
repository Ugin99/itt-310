#include <stdio.h>

//variables

char x = first
char y = second
char z = third

int main()
{
    //Here I am introducing the game to the players
    printf("Welcome to the Arizona Trail. Here you will type in your choices and those choices will affect the outcome of your story\n");

    // Here I grab the main players name
    char name[10];
    printf("\nWhat's your name?\n");
    fgets(name, 10, stdin);
    printf("Hi there, %s\n", name);

    // Next I grab their 2 companions
    char name1[20];
    printf("\nNext, name 2 people you want to bring on your journey. Who is the first companion?\n");
    fgets(name1, 20, stdin);
    printf("You have chosen %s!\n", name1);

    char name2[20];
    printf("\nAnd the second companion?\n");
    fgets(name2, 20, stdin);
    printf("You have chosen %s!\n", name2);


    return 0;
}

