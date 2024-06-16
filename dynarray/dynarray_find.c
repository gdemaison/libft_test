#include "../libft.h"
#include "dynarray.h"

void	*dynarray_find(t_dynarray *arr, void *cell, size_t offset, size_t *result)
{
	size_t	i = offset;
	void	*c;

	if (arr == NULL || cell == NULL || offset > arr->nb_cells)
		return (NULL);

	while ((c = dyacc(arr, i)))
	{
		if (ft_memcmp(cell, c, arr->cell_size) == 0)
		{
			if (result)
				*result = i;
			return (c);
		}
		i++;
	}
	return (NULL);
}
