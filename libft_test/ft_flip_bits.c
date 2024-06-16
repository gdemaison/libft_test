#include "libft.h"

void	ft_flip_bits(void *data, size_t size)
{
	char *buff;

	if (data == NULL)
		return ;

	buff = (char*)data;
    for (size_t i = 0; i < size; i++)
        buff[i] = ~buff[i];
}
