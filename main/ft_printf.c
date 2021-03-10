/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:49:36 by malatini          #+#    #+#             */
/*   Updated: 2021/03/10 21:18:34 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//Revoir la fonction split_format
int		ft_printf(const char *format, ...)
{
	int i;
	int printed_chars;
	//va_list arg_ptr;

	i = 0;
	printed_chars = 0;
	//va_start(arg_ptr, format);
	//revoir la fonction "split format"
	while (format[i])
	{
		if (format[i] == '%')
		{
			//il faut que je modifie la valeur de printed chars
			//fonction qui va envoyer au "parseur"
			//i += printed_chars
			//printed_chars++;
			printf("revoir conditions");
		}
		else
		{
			ft_putchar(format[i]);
			printed_chars++;
		}
		i++;
	}
	//va_end(arg_ptr);
	return (printed_chars);
}
