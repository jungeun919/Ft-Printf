/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungchoi <jungchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 12:33:41 by jungchoi          #+#    #+#             */
/*   Updated: 2022/07/11 10:43:44 by jungchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list ap, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_put_char(va_arg(ap, int));
	else if (format == 's')
		len += ft_put_str(va_arg(ap, char *));
	else if (format == 'p')
		len += ft_put_ptr(va_arg(ap, void *));
	else if (format == 'd' || format == 'i')
		len += ft_put_decimal(va_arg(ap, int));
	else if (format == 'u')
		len += ft_put_unsigned(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_put_unsigned_hex(va_arg(ap, unsigned int), \
		ft_hex_base(format));
	else if (format == '%')
		len += ft_put_char('%');
	else
		len = -1;
	return (len);
}

int	parse(va_list ap, const char *str, int len)
{
	int		i;
	int		check_len;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			check_len = ft_check_format(ap, str[++i]);
			if (check_len == -1)
			{
				va_end(ap);
				return (-1);
			}
			else
				len += check_len;
		}
		else
			len += ft_put_char(str[i]);
		i++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	ap;

	len = 0;
	va_start(ap, str);
	len = parse(ap, str, len);	
	va_end(ap);
	return (len);
}
