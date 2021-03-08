/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:39:34 by malatini          #+#    #+#             */
/*   Updated: 2021/03/08 18:39:59 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
void	printf_struct(t_format *format)
{
	printf("1.0. Indicator 0 = %i\n", format->indicator[0]);
	printf("1.1. Indicator - = %i\n", format->indicator[1]);
	printf("2. Width = %i\n", format->width);
	printf("3. Precision = %i\n", format->precision);
	printf("4. Size - = %i\n", format->size);
	printf("5. Type - = %i\n", format->type);
}
*/

int main(void)
{
	/* initialisation et assignation de la struct
	t_format format;
	format = ft_initialize_struct();
	char str[10] = "%0-*s";
	fill_struct_element(str, &format);
	printf_struct(&format);
	*/
	char str1[25] = "c 'est Mahaut !";
	char str2[25] = "Qui fait des test!";
	ft_printf("coucou %s\n%s\n", str&);
	return (0);
}
