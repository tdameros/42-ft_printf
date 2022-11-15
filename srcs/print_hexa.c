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

size_t	print_hexa(unsigned int number, char *base)
{
	if (number < 16)
		return (write(1, base + number, 1));
	return (print_hexa(number / 16, base) + write(1, base + (number % 16), 1));
}

size_t	print_hexa_pointer(unsigned long long number, char *base)
{
	if (number < 16)
		return (write(1, base + number, 1));
	return (print_hexa_pointer(number / 16, base)
		+ write(1, base + (number % 16), 1));
}

size_t	print_pointer(void *pointer)
{
	return (write(1, "0x", 2)
		+ print_hexa_p((unsigned long long) pointer, HEXA_BASE_LOWER));
}
