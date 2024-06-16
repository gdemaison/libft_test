/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:16:41 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 18:15:09 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool			ft_isprime(int nb)
{
	int	n;

	n = 3;
	if (nb <= 3)
		return (nb <= 1 ? 0 : 1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (false);
	while (n * n <= nb)
	{
		if (nb % n == 0)
			return (false);
		n += 2;
	}
	return (true);
}
