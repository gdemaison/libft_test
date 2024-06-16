#include "libft.h"
#include <time.h>

unsigned long int ft_timespan(bool start)
{
    static struct timespec start_time = {0};
    
    if (start) {
        clock_gettime(CLOCK_MONOTONIC, &start_time);
        return 0; // Return 0 as starting time
    } else {
        struct timespec end_time;
        clock_gettime(CLOCK_MONOTONIC, &end_time);
        unsigned long int elapsed_time = (end_time.tv_sec - start_time.tv_sec) * 1000000 + 
                                         (end_time.tv_nsec - start_time.tv_nsec) / 1000;
        return elapsed_time;
    }
}
