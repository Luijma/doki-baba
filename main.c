#include "baba.h"

int main(int argc, char *argv[])
{
    doki_t Doki = {.Age = 0, .Hunger = 5, .MoodValue = 0, .CurrentMood = 4};
    char* moodstates[] = { "Miserable", "Angry", "Sad", "Bored", "Okay", "Glad", "Happy", "Perfectly Happy", "\0"};
    char *input;

    if (argc == 1)
    {
        Doki.Name = "Doki";
    }
    else
    {
        Doki.Name = argv[1];
    }
    system("clear");
    DisplayScreen(Doki, "homescreen.txt");
    input = GetInput(1);
    system("clear");
    DisplayScreen(Doki, "firstmenuscreen.txt");
    input = GetInput(1);
    return (0);
}
char* GetInput(int ChoiceRange)
{
    char* chr;
    scanf("%c", &chr);
    return (chr);
}
