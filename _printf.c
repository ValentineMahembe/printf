#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string composed of zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte used
 * to end output to strings)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	const char *p;
	va_list args;

	va_start(args, format);
	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			count++;
			continue;
		}
		switch (*++p)
		{
			case 'c':
				_putchar(va_arg(args, int));
				count++;
				break;
			case 's':
			{
				char *str = va_arg(args, char *);

				while (*str)
				{
					_putchar(*str++);
					count++;
				}
				break;
			}
			case '%':
				_putchar('%');
				count++;
				break;
			default:
				_putchar(*p);
				count++;
				break;
		}
	}
	va_end(args);
	return (count);
}

