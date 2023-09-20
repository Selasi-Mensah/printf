#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list list;
	char buffer[BUFF_SIZE];
		if (format == NULL)
		return (-1);
			va_start(list, format);
			printed_chars = vsnprintf(buffer, BUFF_SIZE, format, list);
	va_end(list);
	printf("%s", buffer);
		return (printed_chars);
}
