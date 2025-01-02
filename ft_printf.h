/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:47:40 by jbellucc          #+#    #+#             */
/*   Updated: 2025/01/02 14:14:25 by je               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchr(char j, int *count);
void	ft_putnbr_base2(unsigned long long n, char *base, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr_base(long long n, char *base, int *count);
void	ft_format(va_list args, const char frm, int *count);
void	ft_putptr(void *ptr, int *count);
int		ft_strlen(char *str);
int		ft_printf(const char *s, ...);

#endif
