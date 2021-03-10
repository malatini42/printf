/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:49:36 by malatini          #+#    #+#             */
/*   Updated: 2021/03/10 19:13:56 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//Revoir la fonction split_format
int		ft_printf(const char *format, ...)
{
	int i;
	int j;
	//va_list arg_ptr;

	i = 0;
	j = 0;
	//va_start(arg_ptr, format);
	//revoir la fonction "split format"
	while (format[i])
	{
		if (format[i] == '%')
		{
			//manage_type(format, j);
			//i += manage_type(format, j);
			j++;
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	//va_end(arg_ptr);
	return (i);
}
