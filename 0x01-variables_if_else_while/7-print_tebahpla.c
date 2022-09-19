#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int abc = 'a';

        while (abc <= 'z')
        {
                putchar(abc);
                ++abc;
        }
        putchar('\n');
        return (0);
}

