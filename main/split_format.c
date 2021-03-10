/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:44:57 by malatini          #+#    #+#             */
/*   Updated: 2021/03/10 21:24:21 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//reteser les deux fonctions, revoir la creation de la struct
char	*ft_format_dup(const char *str)
{
	char *cpy;
	int i;

	i = 0;
	//Attention on a exclu le %
	while (str[i] && (is_correct_type(str[i]) != 1))
		i++;
	i++;
	if (!(cpy = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 1;
	cpy[0] = '%';
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

//revoir la fonction + strategie de parsing, retour et parametres
char	**split_format(const char *str)
{
	char **strs;
	int formats_number;
	int i;
	int j;

	if (!(str))
		exit (1);
	formats_number = count_total_format(str);
	if (!(strs = (char **)malloc(sizeof(char *) * (formats_number))))
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
			//(if (j >= formats_number) break)
		}
		i++;
	}
	strs[++j] = NULL;
	return (strs);
}
