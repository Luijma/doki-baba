#include "baba.h"

int main(int argc, char *argv[])
{
    doki_t Doki = {.Age = 0, .Hunger = 5, .MoodValue = 0, .CurrentMood = 4};
    if (argc == 1)
    {
        Doki.Name = "Doki";
    }
    else
    {
        Doki.Name = argv[1];
    }
    printf("%s\n", Doki.Name);
    return (0);
}
