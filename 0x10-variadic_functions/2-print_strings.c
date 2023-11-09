#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The str to be printed between strs.
 * @n: The numbr of strs passed to the funct.
 * @...: A variable numbr of strs to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strs if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int ind;

	va_start(strings, n);

	for (ind = 0; ind < n; ind++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
