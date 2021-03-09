/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:34:06 by malatini          #+#    #+#             */
/*   Updated: 2021/03/09 11:51:09 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//renommer mes "format" en autre chose pour que ce soit plus clair ?

//faire un fonction qui affiche les caracteres si pas de % et qui
//decale si %
//Il me faut les fonctions pour les args !

//revoir si on a vraiment besoin de tout ces parametres
//A retester
int		print_c_b_c(const char *format, t_format *s_format, int count, char **sf_strs)
{
	//va falloir gerer les etoiles
	(void)count;
	(void)sf_strs;
	(void)s_format;
	int i;
	int met_percent;
	int j;

	i = 0;
	j = 0;
	met_percent = 0;
	while (format[i])
	{
		//Attention au cas du %
		if (format[i] == '%')
		{
			//renvoyer vers la fonction qui affichera avec la bonne struct
			//manage_print(s_format[j]);
			j++;
			while ((is_correct_type(format[i]) != 1))
				i++;
		}
		if (format[i] != '%')
			ft_putchar(format[i]);
		i++;
	}
	return (i);
}

//Est-ce que je devrais faire une copie?

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
