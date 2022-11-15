/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdameros <tdameros@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 05:04:07 by tdameros          #+#    #+#             */
/*   Updated: 2022/11/15 05:04:08 by tdameros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

# define HEXA_BASE_LOWER "0123456789abcdef"
# define HEXA_BASE_UPPER "0123456789ABCDEF"

size_t	ft_strlen(const char *s);
size_t	print_str(char *str);
size_t	print_char(char c);

size_t	print_nbr(int n);
size_t	print_unsigned_nbr(unsigned int n);

size_t	print_hexa(unsigned int number, char *base);
size_t	print_pointer(void *pointer);

int		ft_printf(const char *format, ...);
int		is_valid_type(char c);
size_t	print_conversion(char type, va_list args);
#endif
