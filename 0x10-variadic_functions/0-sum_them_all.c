#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @s: The number of paramters passed to the function
 * @...: A Variable number of paramters to calculate the sum of
 *
 * Return: If s == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int s, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, s);

	for (i = 0; i < s; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
