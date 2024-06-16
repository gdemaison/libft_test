#include "libft.h"

char *ft_join_array(char **array, char *sep)
{
	char	*s;
	size_t	total_length = 0;
	size_t	sep_length;

	if (array == NULL || sep == NULL)
		return (NULL);

	sep_length = ft_strlen(sep);
	for (unsigned int i = 0; array[i]; i++)
		total_length += ft_strlen(array[i]) + sep_length;

	total_length -= sep_length;

	if (!(s = malloc(sizeof(char) * (total_length + 1))))
		return (NULL);

	memset(s, 0, total_length);

	for (unsigned int i = 0; array[i]; i++)
	{
		ft_strcat(s, array[i]);
		if (array[i + 1])
			ft_strcat(s, sep);
	}

	return (s);
}
