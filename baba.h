#ifndef BABA_H
#define BABA_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

typedef struct doki_s
{
    char *Name;
    int Age;
    int Hunger;
    int MoodValue;
    int CurrentMood;
} doki_t;

void DisplayScreen(doki_t doki, char* ScreenName);
char* GetInput(int ChoiceRange);
FILE* SetMenu();

#endif /* BABA_H */
