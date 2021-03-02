#include <stdio.h>

int main(int argc, char **argv)
{
    char *welcomeMsg = "Faaaala";
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            printf("%s %s!\n", , argv[i]);
        }
    }
    else
    {
        printf("%s Mundo!\n", welcomeMsg);
    }

    return 0;
}
