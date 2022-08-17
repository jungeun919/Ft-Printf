/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungchoi <jungchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 12:34:13 by jungchoi          #+#    #+#             */
/*   Updated: 2022/07/10 16:24:39 by jungchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
int		ft_check_format(va_list ap, char format);

int		ft_put_char(char c);
int		ft_put_str(char *str);
int		ft_put_ptr(void *ptr);
int		ft_put_unsigned_hex_ptr(uintptr_t num, char *base);
int		get_len_ptr(uintptr_t num, int base_num);

int		len_check(long long num);
void	putarr(char *ret, int len, long long num);
char	*ft_itoa(int num);
int		ft_put_decimal(int num);

void	ft_putnbr(unsigned int num);
int		get_len(unsigned int num, int base_num);
int		ft_put_unsigned(unsigned int num);
char	*ft_hex_base(char format);
int		ft_put_unsigned_hex(unsigned int num, char *base);

#endif
