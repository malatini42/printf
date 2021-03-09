/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:39:34 by malatini          #+#    #+#             */
/*   Updated: 2021/03/09 11:02:15 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_struct(t_format *format)
{
	printf("1.0. Indicator 0 = %i\n", format->indicator[0]);
	printf("1.1. Indicator - = %i\n", format->indicator[1]);
	printf("2. Width = %i\n", format->width);
	printf("3. Precision = %i\n", format->precision);
	printf("5. Type - = %i\n", format->type);
}

int main(void)
{
	/* initialisation et assignation de la struct
	t_format format;
	format = ft_initialize_struct();
	char str[10] = "%0-*s";
	fill_struct_element(str, &format);
	printf_struct(&format);
	*/
	/* - Tester le split avec les structs
	char **strs;
	const char str[40] = "kjddj%--ikddj%**d\n";
	strs = split_format(str);
	int count = count_format(str);
	int i = 0;
	while (i < count)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	*/
	int n = 65;
	ft_printf(hello%i\n, n);
	return (0);
}
