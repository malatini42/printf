/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:34:06 by malatini          #+#    #+#             */
/*   Updated: 2021/03/06 16:12:39 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

/*
int		ft_printf(const char *format, ...)
{
	int i;
	int count;
//creer un compteur qui va se souvenir de combien de % on a croise ?
	i = 0;
	count = 0;
	va_list args;
	//va_start(args, ?)
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
		}
		else
		{
			count++;
			//Tout va etre caste en int ?
			//va_args(args, int);
			i++;
			if (format[i] == '%')
				ft_putchar('%');
			else if (format[i] == 'c')
				is_c(format[i], args);
			else if (format[i] == 's')
				is_s(format[i], args);
			else if (format[i] == 'x' || format[i] == 'X')
				is_x(format[i], args);
			else if (format[i] == 'p')
				is_p(format[i], args);
			else if (format[i] == 'i' || format[i] == 'd')
			{

			}
			else if (format[i] == 'u')
			{

			}
			return (0);
		}
		i++;
	}
	va_end(args);
	return (1);
}
*/
