/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:49:36 by malatini          #+#    #+#             */
/*   Updated: 2021/03/11 18:28:04 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//Verifier qu on a bien le bon nombre d element dans va_list?

int		parse(const char *format, va_list arg_ptr, int *printed_chars)
{
	t_format	*spec;

	spec = ft_initialize_struct();
	fill_struct(&format[*printed_chars], spec);
	if (found_star(format))
		handle_star(format, spec, arg_ptr);
	//printstruct(spec);
	//faire l'affichage
	//compter combien on a afficher de caractere (pas la fonction ci dessous)
	*printed_chars += len_until_end_format(format);
	printf("\nValeur de printed_chars : %i\n", *printed_chars);
	return (0);
}

int		ft_printf(const char *format, ...)
{
	int printed_chars;
	va_list arg_ptr;

	printed_chars = 0;
	va_start(arg_ptr, format);
	while (format[printed_chars])
	{
		if (format[printed_chars] == '%')
		{
			if (format[1] == '\0')
				return (-1);
			parse(&format[printed_chars], arg_ptr, &printed_chars);
			/*
			else if (!(print_per_c(&format[i], arg_ptr, &printed_chars)))
				return (-1);
			*/
		}
		else
			ft_putchar(format[printed_chars]);
		printed_chars++;
	}
	va_end(arg_ptr);
	printf("\nValeur finale : %i\n", printed_chars);
	return (printed_chars);
}
