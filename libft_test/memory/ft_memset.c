/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:14 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 18:09:13 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void			*ft_memset(void *ptr, int c, size_t n)
{
	unsigned long	*longword_ptr;
	unsigned long	magicbit;
	unsigned char	ch;
	unsigned int	i;

	ch = (unsigned char)c;
	magicbit = (~0UL / 255) * (unsigned char)c;
	i = -1;
	while (++i < n % 8)
		((unsigned char*)ptr)[i] = ch;
	longword_ptr = (unsigned long *)(ptr + i);
	while (i < n)
	{
		*longword_ptr++ = magicbit;
		i += 8;
	}
	return (ptr);
}