/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:49:36 by malatini          #+#    #+#             */
/*   Updated: 2021/03/09 15:57:28 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_printf(const char *format, ...)
{
	/*
	int count;
	char **f_strs;
	int i;

	//Est considere comme le premier argument facultatif?
	va_list arg_ptr;
	count = count_format(format);
	i = 0;

	va_start(arg_ptr, format);
	//char *n = va_arg(arg_ptr, char *);
	va_end(arg_ptr);
	*/
	char **sf_strs;
	t_format *f_struct;
	int count;

	sf_strs = split_format(format);
	f_struct = di_all_structs(format);
	count = count_total_format(format);
	/* OK
	while (count--)
	{
		printf("%s\n", sf_strs[count]);
		printf_struct(&f_struct[count]);
	}
	*/
	return (1);
}
