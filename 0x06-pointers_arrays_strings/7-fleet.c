#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *str) 
{
    char *leet_str = str;
    char leet_table[5][3] = 
    {
        {'a', 'A', '4'},
        {'e', 'E', '3'},
        {'o', 'O', '0'},
        {'t', 'T', '7'},
        {'l', 'L', '1'}
    };

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; leet_str[j] != '\0'; j++) 
	{
            if (leet_str[j] == leet_table[i][0] || leet_str[j] == leet_table[i][1])
	    {
		    leet_str[j] = leet_table[i][2];
            }
        }
    }

    return leet_str;
}
