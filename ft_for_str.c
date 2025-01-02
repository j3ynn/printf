/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:44:36 by jbellucc          #+#    #+#             */
/*   Updated: 2025/01/02 14:44:41 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchr(char j, int *count)
{
	write (1, &j, 1);
	(*count)++;
}

void	ft_putstr(char *str, int *count)
{
	if (!str)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (*str)
	{
		ft_putchr(*str, count);
		str ++;
	}
}
