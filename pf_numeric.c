/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_numeric.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:34:22 by malatini          #+#    #+#             */
/*   Updated: 2021/03/06 13:50:12 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int is_numeric_conv(char c)
{
	if (c == 'i' || c == 'd' || c == 'u' || c == 'x' || c == 'X')
		return (1);
	return (0);
}
*/

int found_type(char *str)
{
	int i;

	i = 0;
	while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && str[i])
		i++;
	if (c == 'i' || c == 'd' || c == 'u' || c == 'x' || c == 'X')
		return (1);

}
