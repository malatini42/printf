/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_formats.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:09:54 by malatini          #+#    #+#             */
/*   Updated: 2021/03/08 10:37:41 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//OK - sauf cas % a revoir

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

char	*ft_format_dup(char *str)
{
	char *cpy;
	int i;

	i = 0;
	while (str[i] && (is_correct_type(str[i]) != 1))
		i++;
	if (!(cpy = (char *)malloc(sizeof(char) * (i + 2))))
		return (NULL);
	i = 0;
	while (str[i] && (!(is_correct_type(str[i]))))
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = str[i];
	i++;
	cpy[i] = '\0';
	return (cpy);
}

//ne pas oublier que la derniere ligne est volontaire
//Revoir si ca peut marcher avec le % (pour l instant non)
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
		while ((!(str[i] == '%')) && str[i])
			i++;
		if (str[i] == '%')
		{
			strs[j] = ft_format_dup(str + i);
			printf("%s\n", strs[j]);
			j++;
		}
		i++;
	}
	strs[++j] = NULL;
	printf("%s\n", strs[j]);
	printf("%d\n", j);
	return (strs);
}
