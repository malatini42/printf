/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:49:36 by malatini          #+#    #+#             */
/*   Updated: 2021/03/09 19:03:54 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_printf(const char *format, ...)
{
	char		**sf_strs;
	t_format	*f_struct;
	va_list arg_ptr;
	int i;
	int j;

	i = 0;
	j = 0;
	f_struct = di_all_structs(format);
	va_start(arg_ptr, format);
	sf_strs = split_format(format);
	printf("eo\n");
	while (format[i])
	{
		if (format[i] == '%')
		{
			manage_type(&f_struct[j], arg_ptr);
			i += ft_strlen(sf_strs[j]);
			j++;
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(arg_ptr);
	return (1);
}
