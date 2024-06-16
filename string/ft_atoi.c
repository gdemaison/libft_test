/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:45:34 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 16:23:52 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int				ft_atoi(const char *str)
{
	long long	entier;
	int			i;
	int			signe;

	entier = 0;
	i = -1;
	while (ft_isspace(str[++i]))
		;
	signe = (str[i] == '-') ? -1 : 1;
	(str[i] == '-' || str[i] == '+') ? ++i : 0;
	while (ft_isdigit(str[i]))
	{
		if (entier * signe > 2147483647)
			return (-1);
		if (entier * signe < -2147483648)
			return (0);
		entier = entier * 10 + (str[i++] - '0');
	}
	return ((int)entier * signe);
}
