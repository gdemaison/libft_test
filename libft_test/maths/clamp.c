#include "../libft.h"

void		clamp(int16_t *v, int16_t min, int16_t max)
{
	if (*v < min)
		*v = max - (min - *v);
	else if (*v >= max)
		*v = min + (*v - max);
}
