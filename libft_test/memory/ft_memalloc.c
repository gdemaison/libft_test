/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:36:41 by maboye            #+#    #+#             */
/*   Updated: 2020/08/10 20:03:14 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void			*ft_memalloc(size_t size)
{
	void	*new;

	if (!(new = malloc(size)))
		return (NULL);
	ft_memset(new, 0, size);
	return (new);
}
