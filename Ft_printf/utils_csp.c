/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_csp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungchoi <jungchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:12:32 by jungchoi          #+#    #+#             */
/*   Updated: 2022/07/10 16:12:29 by jungchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_put_str(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[len])
	{
		write(1, str + len, 1);
		len++;
	}
	return (len);
}

int	ft_put_ptr(void *ptr)
{
	int	len;

	len = 0;
	len += ft_put_str("0x");
	len += ft_put_unsigned_hex_ptr((uintptr_t)ptr, ft_hex_base('x'));
	return (len);
}

int	ft_put_unsigned_hex_ptr(uintptr_t num, char *base)
{
	if (num >= 16)
	{
		ft_put_unsigned_hex_ptr(num / 16, base);
		ft_put_char(base[num % 16]);
	}
	else
		ft_put_char(base[num]);
	return (get_len_ptr(num, 16));
}

int	get_len_ptr(uintptr_t num, int base_num)
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
