/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cors.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 13:15:07 by malatini          #+#    #+#             */
/*   Updated: 2021/03/06 15:26:49 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.c"

int get_conversion_type(char *str)
{
	int i;

	i = 0;
	while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' &&
		str[i] <= 'Z')))
		i++;
	if (str[i] == 'i' || str[i] == 'd' || str[i] == 'u')
		return (NUMERIC);
	else if (str[i] == 'c' || str[i] == 's')
		return (ALPHA);
	else if (str[i] == '%')
		return (PERCENT);
	else if (str[i] == 'x' || str[i] == 'X')
		return (HEXA);
	else if (str[i] == 'p')
		return (POINTER);
	//evoir eventuellement ce qu il faudrait faire dans ce cas ?
	else
		exit (ERROR);
	return (DONE);
}

int	find_char(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

