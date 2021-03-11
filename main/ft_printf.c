/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:49:36 by malatini          #+#    #+#             */
/*   Updated: 2021/03/11 13:58:56 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//Verifier qu on a bien le bon nombre d element dans va_list?

int		parse(const char *format, va_list arg_ptr, int *printed_chars)
{
	t_format	*spec;

	spec = ft_initialize_struct();
	fill_struct(&format[*printed_chars], spec);
	printstruct(spec);
	printf("-----------------\n");
	printf("etoile trouvee : %i\n", found_star(format));
	if (found_star(format))
		handle_star(format, spec, arg_ptr);
	printf("-----------------\n");
	printstruct(spec);
	return (0);
}

int		ft_printf(const char *format, ...)
{
	int i;
	int printed_chars;
	va_list arg_ptr;

	i = 0;
	printed_chars = 0;
	va_start(arg_ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[1] == '\0')
				return (-1);
			parse(&format[i], arg_ptr, &printed_chars);
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
