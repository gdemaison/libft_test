/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:29 by maboye            #+#    #+#             */
/*   Updated: 2020/08/10 20:34:04 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*ft_strdup(const char *src)
{
	char	*new;

	if (!src || !(new = (char *)ft_memalloc(sizeof(char)
					* (ft_strlen(src) + 1))))
		return (NULL);
	ft_strcpy(new, src);
	return (new);
}
