/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:39:34 by malatini          #+#    #+#             */
/*   Updated: 2021/03/06 16:58:18 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_struct(t_format *format)
{
	printf("1.Type = %i\n", format->type);
	//2.Left-justify = %i\n3.Right-justify = %i\n4.Number = %i\n5. Star = %i\n6. Dot_Number = %i\n7. Dot_Star = %i\n
	//, format->left_justify, format->right_justify, format->number, format->star, format->dot_number, format->dot_star
}

int main(void)
{
	t_format format;
	format = ft_initialize_struct();
	printf_struct(format);
	/*
	char str[10] = "%0*i";
	fill_type_in_struct(str, format);
	fill_dash_in_struct(str, format);
	printf_struct(format);
	*/
	return (0);
}
