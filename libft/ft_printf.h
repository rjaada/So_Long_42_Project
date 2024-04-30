/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:04:37 by rjaada            #+#    #+#             */
/*   Updated: 2024/04/30 16:01:24 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_handle_char(va_list ap);
int		ft_handle_string(va_list ap);
int		ft_handle_int(va_list ap);
int		ft_handle_unsigned(va_list ap);
int		ft_handle_pointer(va_list ap);
int		ft_handle_hexlower(va_list ap);
int		ft_handle_hexupper(va_list ap);
int		ft_handle_percent(void);
size_t	ft_strlen(const char *s);
int		ft_putchar(char c);
int		ft_putnbr_base(unsigned long long nb, const char *base);

#endif
