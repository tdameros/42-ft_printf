/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdameros <tdameros@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 04:07:09 by tdameros          #+#    #+#             */
/*   Updated: 2022/11/15 04:07:09 by tdameros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @return len of s
 */
size_t	ft_strlen(const char *s)
{
	char	*ptr;

	ptr = (char *) s;
	while (*ptr != '\0')
		ptr++;
	return (ptr - s);
}

/**
 * Print string in stdout. Print (null) is pointer is NULL.
 * @return the number of characters printed
 */
size_t	print_str(char *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}

/**
 * Print char in stdout.
 * @return the number of characters printed
 */
size_t	print_char(char c)
{
	return (write(1, &c, 1));
}
