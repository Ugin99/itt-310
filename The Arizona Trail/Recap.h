#pragma once

// Struct and Union on a header file to be called in the Story.c file
struct recapStory
{
    char player[10];
    char player1[10];
    char player2[10];
    char place[10];

    union answerChoice
    {
    char tempeAnswer[10];
    char avondaleAnswer[10];
    } answer;

} recap;
