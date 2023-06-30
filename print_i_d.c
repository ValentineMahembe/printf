#include "main.h"

/**
 * _itoa - converts an integer 
 * @n: the integer to convert
 *
 * Return: a pointer to the resulting string
 */

char *_itoa(int n)
{
	int len = 0, neg = 0;
	char *str;
	unsigned int num;

	if (n < 0)
	{
		neg = 1;
		num = -n;
	}
	else
		num = n;

	do 
	{
		len++;
		num /= 10;
	}

	while (num != 0);

	str = malloc((len + neg + 1) * sizeof(char));
	if (!str)
		return (NULL);

	str[len + neg] = '\0';
	if (neg)
		str[0] = '-';
	if (n <0)
		num = -n;
	else 
		num = n;

	do 
	{
		str[--len + neg] = (num % 10) + '0';
		num /= 10;
	} while (num != 0);

	return (str);
}
