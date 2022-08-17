/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungchoi <jungchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:09:10 by jungchoi          #+#    #+#             */
/*   Updated: 2022/07/11 10:45:22 by jungchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_check(long long num)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

void	putarr(char *ret, int len, long long ln)
{
	*(ret + len) = '\0';
	while (len--)
	{
		*(ret + len) = ln % 10 + '0';
		ln /= 10;
	}
}

char	*ft_itoa(int num)
{
	char		*ret;
	int			len;
	int			sign;
	long long	ln;

	ln = (long long)num;
	sign = 1;
	if (ln < 0)
	{
		ln = -ln;
		sign = -1;
	}
	len = len_check(ln);
	if (sign == -1)
		len++;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	putarr(ret, len, ln);
	if (sign == -1)
		*ret = '-';
	return (ret);
}

int	ft_put_decimal(int num)
{
	int		len;
	char	*str;

	str = ft_itoa(num);
	len = ft_put_str(str);
	if (str)
		free(str);
	return (len);
}
