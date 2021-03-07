/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_formats.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:09:54 by malatini          #+#    #+#             */
/*   Updated: 2021/03/07 16:07:29 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		count_format(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count++;
			if (str[i + 1] == '%')
				i++;
		}
		i++;
	}
	return (count);
}

//Faire en sorte de copier apres le % pour gerer le cas %
char	*ft_format_dup(char *str)
{
	char *cpy;
	int i;

	if (!str)
		return (NULL);
	i = 0;
	if (str[0] == '%')
		i++;
	while (str[i] && !(is_correct_type(str[i])))//Attention risque que ce soit long
		i++;
	printf("%i\n", i);
	if (!(cpy = (char *)malloc(sizeof(char) * (i + 2))))
		return (NULL);
	i = 0;
	//Faire une condition au cas ou il y aurait un caractere deg?
	while (str[i] && !(is_correct_type(str[i])))
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = str[i];
	i++;
	cpy[i] = '\0';
	return (cpy);
}


char **split_format(char *str)
{
	char **strs;
	int formats_number;
	int i;
	int j;

	if (!(str))
		exit (1);
	formats_number = count_format(str);
	if (!(strs = (char **)malloc(sizeof(char *) * (formats_number + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (!(str[i] == '%'))
			i++;
		strs[j] = ft_format_dup(str + i);//A terminer + tester
	}
}
