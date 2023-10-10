#include "main.h"
#include <stdio.h>

/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
 */
int main(void)
{
    char str[] = "_putchar\n";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }

    return (0);
}
