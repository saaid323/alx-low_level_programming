#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entery point
 * @argc: int argument
 * @argv: pointer to a string
 * Return: return 0 Always (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int total = 0;

        if (argc == 1)
        {
            printf("0\n");
	    return (1);
        }
        else
        {
            for (i = 1; i < argc; i++)
                {
                    if (isdigit(argv[i]))
                    {
                        printf("Error\n");
                    }
                    else
                    {
                        total += atoi(argv[i]);
                    }
                }
            printf("%d\n", total);
        }

        return (0);
}
