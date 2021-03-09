/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:44:57 by malatini          #+#    #+#             */
/*   Updated: 2021/03/09 15:44:59 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//OK - sauf cas % a revoir

//Fonction a revoir / Attention j ai change le nom
int		count_total_format(const char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	//Attention il faudrait faire une condition pour le %%
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

char	*ft_format_dup(const char *str)
{
	char *cpy;
	int i;

	i = 0;
	//Attention on a exclu le %
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
//Revoir si ca peut marcher avec le % (pour l instant non) !
char **split_format(const char *str)
{
	char **strs;
	int formats_number;
	int i;
	int j;

	if (!(str))
		exit (1);
	formats_number = count_total_format(str);
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
			j++;
		}
		i++;
	}
	strs[++j] = NULL;
	return (strs);
}
