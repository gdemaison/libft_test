#include "libft.h"

float ft_clamp(float input, float min, float max)
{
	if (input > max)
		return (max);
	else if (input < min)
		return (min);
	return (input);
}
