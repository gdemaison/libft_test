/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mmapfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:17:32 by maboye            #+#    #+#             */
/*   Updated: 2020/08/10 19:58:07 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "../libft.h"

char			*ft_mmapfile(char *file_path)
{
	struct stat	file_stat;
	char		*dst;
	int			fd;

	fd = open(file_path, O_RDONLY);
	if (fstat(fd, &file_stat))
    {
        close(fd);
		return (NULL);
    }
	dst = mmap(NULL, file_stat.st_size,
		PROT_READ | PROT_WRITE, MAP_FILE | MAP_PRIVATE, fd, 0);
    close(fd);
	return (dst);
}
