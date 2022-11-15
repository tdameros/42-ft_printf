/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdameros <tdameros@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 04:07:05 by tdameros          #+#    #+#             */
/*   Updated: 2022/11/15 04:07:05 by tdameros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

size_t	print_nbr(int n)
{
	if (n == INT_MIN)
		return (print_str("-2147483648"));
	if (n < 0)
		return (print_char('-') + print_nbr(-n));
	else if (n > 9)
		return (print_nbr(n / 10) + print_char((n % 10) + '0'));
	else
		return (print_char(n + '0'));
}

size_t	print_unsigned_nbr(unsigned int n)
{
	if (n > 9)
		return (print_nbr(n / 10) + print_char((n % 10) + '0'));
	else
		return (print_char(n + '0'));
}
