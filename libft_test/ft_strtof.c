#include "libft.h"
#include <math.h>

float ft_strtof(const char *str, char **endptr) {
    // Skip leading whitespace
    while (*str == ' ') {
        str++;
    }

    // Check for sign
    bool negative = false;
    if (*str == '-') {
        negative = true;
        str++;
    } else if (*str == '+') {
        str++;
    }

    // Convert integer part
    float result = 0.0f;
    while (ft_isdigit(*str)) {
        result = result * 10.0f + (*str - '0');
        str++;
    }

    // Convert fractional part
    if (*str == '.') {
        str++;
        float fraction = 1.0f;
        while (ft_isdigit(*str)) {
            fraction /= 10.0f;
            result += (*str - '0') * fraction;
            str++;
        }
    }

    // Convert exponent part
    if (*str == 'e' || *str == 'E') {
        str++;
        bool exp_negative = false;
        if (*str == '-') {
            exp_negative = true;
            str++;
        } else if (*str == '+') {
            str++;
        }
        
        int exponent = 0;
        while (ft_isdigit(*str)) {
            exponent = exponent * 10 + (*str - '0');
            str++;
        }

        if (exp_negative) {
            exponent = -exponent;
        }

        result *= powf(10.0f, (float)exponent);
    }

    // Set endptr if not NULL
    if (endptr != NULL) {
        *endptr = (char *)str;
    }

    // Apply sign
    if (negative) {
        result = -result;
    }

    return result;
}
