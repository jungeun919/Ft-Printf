/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_uxX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungchoi <jungchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:25:35 by jungchoi          #+#    #+#             */
/*   Updated: 2022/07/06 16:51:13 by jungchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(unsigned int num)
{
	char	c;

	if (num == 0)
		write(1, "0", 1);
	else if (num < 10)
	{
		c = num + '0';
		write(1, &c, 1);
	}
	else if (num >= 10)
	{
		c = num % 10 + '0';
		ft_putnbr(num / 10);
		write(1, &c, 1);
	}
}

int	get_len(unsigned int num, int base_num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num /= base_num;
		len++;
	}
	return (len);
}

int	ft_put_unsigned(unsigned int num)
{
	ft_putnbr(num);
	return (get_len(num, 10));
}

char	*ft_hex_base(char format)
{
	char	*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	return (base);
}

int	ft_put_unsigned_hex(unsigned int num, char *base)
{
	if (num >= 16)
	{
		ft_put_unsigned_hex(num / 16, base);
		ft_put_char(base[num % 16]);
	}
	else
		ft_put_char(base[num]);
	return (get_len(num, 16));
}
