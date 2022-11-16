/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdameros <tdameros@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:59:45 by tdameros          #+#    #+#             */
/*   Updated: 2022/11/15 04:10:27 by tdameros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Simple printf with basic conversion (cspdiuxX%).
 * @return the number of characters printed
 */
int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	index;
	size_t	len;

	index = 0;
	len = 0;
	va_start(args, format);
	while (format[index] != '\0')
	{
		if (format[index] == '%' && is_valid_type(format[index + 1]))
		{
			len += print_conversion(format[index + 1], args);
			index++;
		}
		else
			len += write(1, format + index, 1);
		index++;
	}
	va_end(args);
	return (len);
}

/**
 * @return boolean if char c is valid type conversion of printf.
 */
int	is_valid_type(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%');
}

/**
 * Print the conversion in stdout.
 * @param type valid char type in printf
 * @param args variadic arguments
 * @return the number of characters printed
 */
size_t	print_conversion(char type, va_list args)
{
	if (type == 's')
		return (print_str(va_arg(args, char *)));
	else if (type == 'c')
		return (print_char((char) va_arg(args, int)));
	else if (type == 'x')
		return (print_hexa(va_arg(args, int), HEXA_BASE_LOWER));
	else if (type == 'X')
		return (print_hexa(va_arg(args, int), HEXA_BASE_UPPER));
	else if (type == 'p')
		return (print_pointer(va_arg(args, void *)));
	else if (type == '%')
		return (print_char('%'));
	else if (type == 'd' || type == 'i')
		return (print_nbr(va_arg(args, int)));
	else if (type == 'u')
		return (print_unsigned_nbr(va_arg(args, unsigned int)));
	return (0);
}
