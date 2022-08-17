/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungchoi <jungchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:59:10 by jungchoi          #+#    #+#             */
/*   Updated: 2022/07/10 16:24:55 by jungchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void ft_printf_c()
{
	printf("\n========================================\n");
	printf("==============PRINTF_c_TEST============\n");
	printf("========================================\n");
	
	char input_c = 'a';
	int result_c;
	
	result_c = ft_printf("%c\n", input_c); //a
	printf("result = %d\n", result_c); //2
	printf("printf = %c\n", input_c); //printf = a
}

void ft_printf_s()
{
	printf("\n========================================\n");
	printf("==============PRINTF_s_TEST============\n");
	printf("========================================\n");
	
	char *input_s = "abc";
	int result_s;

	result_s = ft_printf("%s\n", input_s);
	printf("result = %d\n", result_s);
	printf("printf = %s\n", input_s);

	char *input_s2 = NULL;
	int result_s2;

	result_s2 = ft_printf("%s\n", input_s2);
	printf("result = %d\n", result_s2);
	printf("printf = %s\n", input_s2);
}

void ft_printf_p()
{
	printf("\n========================================\n");
	printf("==============PRINTF_p_TEST============\n");
	printf("========================================\n");

	uintptr_t input_p = 4294967295; //unsigned long int max
	int result_p;
	
	result_p = ft_printf("%p\n", &input_p);
	printf("result = %d\n", result_p);
	printf("printf = %p\n", &input_p);
}

void ft_printf_d()
{
	printf("\n========================================\n");
	printf("==============PRINTF_d_TEST============\n");
	printf("========================================\n");

	int input_d = 2147483647;
	int result_d;

	result_d = ft_printf("%d\n", input_d);
	printf("result = %d\n", result_d);
	printf("printf = %d\n", input_d);
}

void ft_printf_i()
{
	printf("\n========================================\n");
	printf("==============PRINTF_i_TEST============\n");
	printf("========================================\n");

	int input_i = 11;
	int result_i;

	result_i = ft_printf("%i\n", input_i);
	printf("result = %d\n", result_i);
	printf("printf = %i\n", input_i);
}

void ft_printf_u()
{
	printf("\n========================================\n");
	printf("==============PRINTF_u_TEST============\n");
	printf("========================================\n");

	int input_u = 0;
	int result_u;
	
	result_u = ft_printf("%u\n", input_u);
	printf("result = %d\n", result_u);
	printf("printf = %u\n", input_u);
}

void ft_printf_x()
{
	printf("\n========================================\n");
	printf("==============PRINTF_x_TEST============\n");
	printf("========================================\n");

	int input_x = 254; //fe
	int result_x;

	result_x = ft_printf("%x\n", input_x);
	printf("result = %d\n", result_x);
	printf("printf = %x\n", input_x);
}

void ft_printf_X()
{
	printf("\n========================================\n");
	printf("==============PRINTF_X_TEST============\n");
	printf("========================================\n");
	
	int input_X = 26; //16 + 10(A)
	int result_X;
	
	result_X = ft_printf("%X\n", input_X);
	printf("result = %d\n", result_X);
	printf("printf = %X\n", input_X);
}

void ft_printf_percent()
{
	printf("\n========================================\n");
	printf("==============PRINTF_percent_TEST============\n");
	printf("========================================\n");

	int result_percent;
	result_percent = ft_printf("%%\n");
	printf("result = %d\n", result_percent);
	printf("printf = %%\n");
}

int main()
{
	// ft_printf_c();
	// ft_printf_s();
	ft_printf_p();
	// ft_printf_d();
	// ft_printf_i();
	// ft_printf_u();
	// ft_printf_x();
	// ft_printf_X();
	// ft_printf_percent();

	// system("leaks a.out");
}
