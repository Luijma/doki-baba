#include "baba.h"
void DisplayScreen(doki_t doki, char* ScreenName)
{
    FILE* file;
    char* line = NULL;
    size_t len = 0;
    ssize_t read;

    file = fopen(ScreenName, "r");

    if (file == NULL)
    {
        printf("Error with Screen File for <%s>\n", ScreenName);
        exit(EXIT_FAILURE);
    }
    while ((read = getline(&line, &len, file)) != -1)
    {
        /*
         * Will need to add code that searches the line for "Doki", and then replaces it with doki.name"
         */
        printf("%s", line);
    }
    fclose(file);
    if (line)
        free(line);
}
