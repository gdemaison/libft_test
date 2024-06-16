/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:50 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 18:31:26 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		len;

	if (!(len = ft_strlen(needle)))
		return ((char *)haystack);
	i = -1;
	while (haystack[++i])
		if (ft_strncmp(&haystack[i], needle, len) == 0)
			return ((char *)&haystack[i]);
	return (NULL);
}
