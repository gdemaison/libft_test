#include "libft.h"

unsigned long int simple_rand(unsigned long int seed) {
    // Simple linear congruential generator (LCG) parameters
    unsigned long int a = 1664525;
    unsigned long int c = 1013904223;
    unsigned long int m = 4294967296; // 2^32
    seed = (a * seed + c) % m;
    return seed;
}

unsigned long int ft_random(unsigned long int min, unsigned long int max, unsigned long int seed)
{
	static unsigned long eseed = 6745779023;

    seed = simple_rand(eseed);
	eseed = seed;
    return min + (seed % (max - min + 1));
}
