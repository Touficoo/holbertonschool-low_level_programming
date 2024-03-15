// 103-infinite_add.c
#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int sum;
    int len1 = 0, len2 = 0;
    int i, j;

    /* Calculate the length of n1 and n2 */
    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    /* Check if there is enough space in r to store the result */
    if (len1 + len2 >= size_r)
        return 0;

    /* Perform addition from right to left */
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';
        carry = sum / 10;
        r[len1 + len2 - 1 - i - j] = sum % 10 + '0';
    }

    /* Add null terminator to the end of the result */
    r[len1 + len2] = '\0';

    /* Reverse the result string */
    for (i = 0, j = len1 + len2 - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return r;
}
