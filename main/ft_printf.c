/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:49:36 by malatini          #+#    #+#             */
/*   Updated: 2021/03/12 15:29:03 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//Verifier qu on a bien le bon nombre d element dans va_list?

t_format	*parse(const char *format, va_list arg_ptr, int *printed_chars)
{
	t_format	*spec;

	spec = ft_initialize_struct();
	fill_struct(&format[*printed_chars], spec);
	if (found_star(format))
		handle_star(format, spec, arg_ptr);
	if (spec->type == PC)
	print_type(format, spec, printed_chars);
	//printstruct(spec);
	//printf("\nValeur de printed_chars : %i\n", *printed_chars);
	return (0);
}

//Voir si on devrait ajouter une variable pour suivre sur quel caractere on se trouve
int		ft_printf(const char *format, ...)
{
	int 		printed_chars;
	va_list 	arg_ptr;
	int			i;
	t_format 	*spec;

	printed_chars = 0;
	i = 0;
	spec = ft_initialize_struct();
	va_start(arg_ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			//rajouter la fonction null spec ?
			/*
			if (format[1] == '\0')
				return (-1);
			*/
			i++;
			parse(&format[i], arg_ptr, &printed_chars);
			//break;
			/*
			else if (!(print_per_c(&format[i], arg_ptr, &printed_chars)))
				return (-1);
			*/
		}
		else
		{
			ft_putchar(format[i]);
			printed_chars++;
		}
		i++;
	}
	va_end(arg_ptr);
	return (printed_chars);
}
