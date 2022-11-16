/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdameros <tdameros@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 04:07:00 by tdameros          #+#    #+#             */
/*   Updated: 2022/11/15 04:07:01 by tdameros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Print hexa conversion of int number in stdout.
 * @return the number of characters printed
 */
size_t	print_hexa(unsigned int number, char *base)
{
	if (number < 16)
		return (print_char(base[number]));
	return (print_hexa(number / 16, base) + print_char(base[number % 16]));
}

/**
 * Print hexa conversion of unsigned long long in stdout.
 * @return the number of characters printed
 */
size_t	print_hexa_pointer(unsigned long long number, char *base)
{
	if (number < 16)
		return (print_char(base[number]));
	return (print_hexa_pointer(number / 16, base)
		+ print_char(base[number % 16]));
}

/**
 * Print hexa conversion of pointer in stdout.
 * @return the number of characters printed
 */
size_t	print_pointer(void *pointer)
{
	return (print_str("0x")
		+ print_hexa_pointer((unsigned long long) pointer, HEXA_BASE_LOWER));
}
