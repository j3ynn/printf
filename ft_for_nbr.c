/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:45:07 by jbellucc          #+#    #+#             */
/*   Updated: 2025/01/02 14:53:27 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
		p ++;
	return (p);
}

void	ft_putnbr_base2(unsigned long long n, char *base, int *count)
{
	unsigned long long	len;
	char				c;

	len = (unsigned long long)ft_strlen(base);
	if (len < 2)
		return ;
	if (n >= len)
	{
		ft_putnbr_base2(n / len, base, count);
	}
	c = base[n % len];
	ft_putchr(c, count);
}

void	ft_putnbr_base(long long n, char *base, int *count)
{
	int		len;
	char	c;

	len = ft_strlen(base);
	if (len < 2)
		return ;
	if (n < 0)
	{
		n = -n;
		ft_putchr('-', count);
	}
	if (n >= len)
	{
		ft_putnbr_base(n / len, base, count);
	}
	c = base[n % len];
	ft_putchr(c, count);
}
/*int main ()
{
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	count1 = ft_putnbr_base(-42, "0123456789");	// Stampa 42 (base)
	write (1, "\n", 1);
	count2 = ft_putnbr_base(42, "01");           // Stampa 101010 (base 
	write (1, "\n", 1);
	count3 = ft_putnbr_base(42, "0123456789ABCDEF");  // Stampa 2A (base 16)
	write (1, "\n", 1);
	count3 = ft_putnbr_base(42, "0123456789abcdef");
	write (1, "\n", 1);
	printf("%d\n %d\n %d\n", count1, count2, count3);
}*/
