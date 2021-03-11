/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:34:07 by malatini          #+#    #+#             */
/*   Updated: 2021/03/11 12:16:59 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		found_star(const char *str)
{
	int i;
	int found;

	i = 1;
	found = 0;
	while (str[i])
	{
		if (is_correct_type(str[i]))
			return (found);
		if (str[i] == '*')
			found++;
		i++;
	}
	return (found);
}

int		is_after_star(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && !(is_correct_type(str[i])))
	{
		while (str[i] != '*' && str[i] && !(is_correct_type(str[i])))
			i++;
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		handle_star(const char *str, t_format *format, int arg_ptr)
{
	int star;
	//int type;

	printf("arg = %i\n", arg_ptr);
	star = found_star(str);
	{
		//Attention on ne rentre pas dans la condition
		if (star == 1 && is_after_star(str, '.'))
		{
			//Ca ne marche pas !
			format->width = arg_ptr;
			printf("L'arg est %i", arg_ptr);
		}
		/*
		else if (star == 2)
		{
			format->width = arg_ptr;
			//Le type ne peut etre qu un int!
			//Attention revoir comment je peux gerer deux etoiles. est-ce que j'en gere une a la fois?
			//format->width = va_arg (arg_ptr, type);
		}
		*/
	}
	return (star);
}
