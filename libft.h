/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:28:45 by maboye            #+#    #+#             */
/*   Updated: 2024/06/12 17:50:56 by gedemais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H


# include <stdbool.h>
# include <stdint.h>
# include <stdlib.h>
# include <string.h>
# include "dynarray/dynarray.h"

# define BUFF_SIZE	4096

#ifndef M_PI
# define M_PI		3.14159
#endif

typedef union	u_rsqrt
{
	float		f;
	uint32_t	i;
}				t_rsqrt;

void			ft_arr_cprint(char **arr);
void			ft_arrfree(char **arr);
int				ft_arrlen(char **arr);

bool            ft_inbounds(int c, int min, int max);
bool			ft_isalnum(int c);
bool			ft_isalpha(int c);
bool			ft_isascii(int c);
bool			ft_isdigit(int c);
bool			ft_ishexa(int c);
bool			ft_islower(int c);
bool			ft_isprintable(int c);
bool			ft_isspace(int c);
bool			ft_isupper(int c);

bool			ft_isprime(int nb);
float			ft_power(int nb, int po);
float			ft_rsqrt(float number);
float			ft_sqrt(float nb);
void			clamp(int16_t *v, int16_t min, int16_t max);

void			*ft_memalloc(size_t size);
void			*ft_memchr(const void *ptr, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			ft_memdel(void **ptr);
void			*ft_memset(void *ptr, int c, size_t n);
void			*ft_realloc(void *ptr, size_t new_size);

void			ft_printf(int fd, const char *str, ...);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl(char const *str);
void			ft_putendl_fd(char const *str, int fd);
void			ft_putnbr(int nb);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr(char const *str);
void			ft_putstr_fd(char const *str, int fd);

int				ft_abs(int nb);
double			ft_atof(const char *str);
long			ft_atoi_base(const char *str, unsigned int base);
int				ft_atoi(const char *str);
int				ft_intlen(int nb);
char			*ft_itoa_base(int nb, int base);
char			*ft_itoa(long long int nb);
char			*ft_mmapfile(char *file_path);
char			*ft_readfile(char *file_path);
char			*ft_strcat(char *dst, const char *src);
char			*ft_strchr(const char *str, int c);
int				ft_strclen(const char *str, char c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dst, const char *src);
void			ft_strdel(char **str);
char			*ft_strdup(const char *src);
char			*ft_strfjoin(char const *s1, char const *s2, int choose);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlen(const char *str);
char			*ft_strncat(char *dst, const char *src, size_t nb);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			**ft_strsplit(char *str, char *charset);
char			*ft_strstr(const char *str, const char *to_find);
char			*ft_strsub(char const *str, unsigned int start, size_t len);
double			ft_to_degrees(double radians);
double			ft_to_radians(double degrees);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_wordcount(const char *str, char c);
int				get_next_line(const int fd, char **line);

// Libfsteroids
int				ft_is_only_alpha(const char *s, const char *exceptions);
int				ft_is_only_digit(const char *s, const char *exceptions);
int				ft_is_only_alphanum(const char *s, const char *exceptions);
unsigned long int ft_timespan(bool start);
unsigned long int ft_random(unsigned long int min, unsigned long int max, unsigned long int seed);
char			*ft_join_array(char **array, char *sep);
void			ft_flip_bits(void *data, size_t size);
float			ft_strtof(const char *theString, char **end);
float			ft_clamp(float input, float min, float max);
float			ft_map_flt(float input, float input_bounds[2], float output_bounds[2]);


#endif
