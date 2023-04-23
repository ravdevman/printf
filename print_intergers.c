#include "main.h

/*Liyah Louis - Rayane Madoune*/

/**
* _printf - prints a string of characters
*
* @format: a string of specific characters
* Return: (the amount of characters printed)
*/
int _printf(const char *format, ...)
{
	int printed_chars;
	/*a list of format and there function*/
	conver_t f_list[] = {
		{"d", print_integer},
		{"i", print_integer},
		{NULL ,NULL}
};

va_list args;

	if (format == NULL)
		return (-1);

		va_start(args, format);
		printed_char = mixer(format, list_f, args);
		va_end(args);

		return (printed_char);
}