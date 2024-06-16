/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:17:32 by maboye            #+#    #+#             */
/*   Updated: 2020/08/10 19:58:07 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "../libft.h"

char			*ft_readfile(char *file_path)
{
	char	buf[BUFF_SIZE + 1];
	char	*str;
	int		fd;
	int		r;

	if (!file_path || BUFF_SIZE < 0)
		return (NULL);
	str = NULL;
	fd = open(file_path, O_RDONLY);
	while ((r = read(fd, buf, BUFF_SIZE)))
	{
		if (r == -1)
		{
			ft_strdel(&str);
			close(fd);
			return (NULL);
		}
		buf[r] = '\0';
		str = ft_strfjoin(str, buf, 1);
	}
	close(fd);
	return (str);
}
