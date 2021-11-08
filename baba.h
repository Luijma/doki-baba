#ifndef BABA_H
#define BABA_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

const char *moods[] = { "Miserable", "Angry", "Sad", "Bored", "Okay", "Glad", "Happy", "Perfectly Happy", "\0"};

typedef struct doki_s
{
    char *Name;
    int Age;
    int Hunger;
    int MoodValue;
    int CurrentMood;
} doki_t;

void DisplayMenu(doki_t doki, FILE CurrentMenu);
char* GetInput(int ChoiceRange);
FILE* SetMenu();

#endif /* BABA_H */
