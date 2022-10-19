#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * x: single letter input
 * Return: 1 if int x is lowercase, 0 if otherwise
 */


int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	else
		return (0);
}
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
