#include "libft.h"

// Function to reverse bits in a byte
static unsigned char reverse_byte(unsigned char byte)
{
    unsigned char result = 0;
    for (int i = 0; i < 8; i++) {
        result = (result << 1) | (byte & 1);
        byte >>= 1;
    }
    return (result);
}

// Function to reverse bits in a buffer
void ft_reverse_bits(void *buffer, size_t size)
{
    unsigned char *bytes = (unsigned char *)buffer;
    for (size_t i = 0; i < size; i++) {
        bytes[i] = reverse_byte(bytes[i]);
    }
}
