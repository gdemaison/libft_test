/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 13:36:44 by maboye            #+#    #+#             */
/*   Updated: 2019/08/22 23:37:30 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void		recursion(int nb, int b, char *str, int *i)
{
	const char	*base = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (nb <= -b || b <= nb)
		recursion(nb / b, b, str, i);
	str[(*i)++] = base[ft_abs(nb % b)];
}

char			*ft_itoa_base(int nb, int base)
{
	char	*str;
	int		i;

	if (base < 2 || base > 36)
		return (NULL);
	if (!(str = (char *)ft_memalloc(sizeof(char) * 32)))
		return (NULL);
	i = 0;
	if (nb < 0)
		str[i++] = '-';
	recursion(nb, base, str, &i);
	return (str);
}
