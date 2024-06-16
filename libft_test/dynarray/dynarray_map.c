#include "../libft.h"
#include "dynarray.h"

int             dynarray_map(t_dynarray *arr, int (*process)(void *cell, void *param), void *param)
{
	void	*c;

	if (arr == NULL || process == NULL)
		return (-1);
	for (size_t i = 0; i < arr->nb_cells; i++)
	{
		c = dyacc(arr, (int)i);
		if (process(c, param) == -1)
			return (-1);
	}
	return (0);
}
