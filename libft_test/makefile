# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maboye <marcaboye@gmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 11:17:40 by maboye            #+#    #+#              #
#    Updated: 2024/06/12 17:51:18 by gedemais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

DEBUG	?=	0
ifeq ($(DEBUG), 1)
    FLAGS += -g3 -fsanitize=address
endif

OPTI	?=	0
ifeq ($(OPTI), 1)
    FLAGS += -Ofast -march=native
endif

INCLUDE	=	libft.h\
			dynarray/dynarray.h

D_ARRAY	 =	./array
D_CHAR	 =	./char
D_DARR	 =	./dynarray
D_MATHS  =	./maths
D_MEM	 =	./memory
D_PRINT	 =	./print
D_STRING =	./string
D_LIBFSTEROIDS = ./

S_ARRAY	=	ft_arr_cprint.c\
			ft_arrfree.c\
			ft_arrlen.c

S_CHAR	=	ft_inbounds.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_ishexa.c\
			ft_islower.c\
			ft_isprintable.c\
			ft_isspace.c\
			ft_isupper.c

S_DARR	=	dynarray.c\
			dynarray_insert.c\
			dynarray_mem.c\
			dynarray_sort.c\
			dynarray_stack.c\
			dynarray_find.c\
			dynarray_map.c\
			dynarray_sed.c

S_MATHS	=	ft_isprime.c\
			ft_power.c\
			ft_rsqrt.c\
			ft_sqrt.c\
			clamp.c

S_MEM	=	ft_memalloc.c\
			ft_memcpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memdel.c\
			ft_memset.c\
			ft_realloc.c\

S_PRINT	=	ft_printf.c\
			ft_putchar.c\
			ft_putchar_fd.c\
			ft_putendl.c\
			ft_putendl_fd.c\
			ft_putnbr.c\
			ft_putnbr_fd.c\
			ft_putstr.c\
			ft_putstr_fd.c\

S_STRING =	ft_abs.c\
			ft_atof.c\
			ft_atoi_base.c\
			ft_atoi.c\
			ft_intlen.c\
			ft_itoa_base.c\
			ft_itoa.c\
			ft_mmapfile.c\
			ft_readfile.c\
			ft_strcat.c\
			ft_strchr.c\
			ft_strclen.c\
			ft_strcmp.c\
			ft_strcpy.c\
			ft_strdel.c\
			ft_strdup.c\
			ft_strfjoin.c\
			ft_strjoin.c\
			ft_strlen.c\
			ft_strncat.c\
			ft_strncmp.c\
			ft_strncpy.c\
			ft_strsplit.c\
			ft_strstr.c\
			ft_strsub.c\
			ft_to_degrees.c\
			ft_to_radians.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_wordcount.c\
			get_next_line.c

S_LIBFSTEROIDS = 	ft_is_only_alpha.c\
					ft_is_only_digit.c\
					ft_is_only_alphanum.c\
					ft_timespan.c\
					ft_random.c\
					ft_join_array.c\
					ft_flip_bits.c\
					ft_strtof.c\
					ft_clamp.c\
					ft_map_flt.c

SRC		=	$(addprefix $(D_ARRAY)/,$(S_ARRAY))\
			$(addprefix $(D_CHAR)/,$(S_CHAR))\
			$(addprefix $(D_DARR)/,$(S_DARR))\
			$(addprefix $(D_MATHS)/,$(S_MATHS))\
			$(addprefix $(D_MEM)/,$(S_MEM))\
			$(addprefix $(D_PRINT)/,$(S_PRINT))\
			$(addprefix $(D_STRING)/,$(S_STRING))\
			$(addprefix $(D_LIBFSTEROIDS)/,$(S_LIBFSTEROIDS))

OBJS 	=	$(SRC:.c=.o)

RED		=	\033[31m
GREEN	=	\033[32m
END		=	\033[0m

all:		$(NAME)

%.o: 		%.c $(INCLUDE)
			@printf "${RED}Compiling [$<]"
			@printf "                            \\r${END}"
			@$(CC) $(FLAGS) -c -o $@ $<

$(NAME):	$(OBJS)
			@ar rcs $(NAME) $(OBJS)
			@printf "$(GREEN)Libft successfully compiled !"
			@printf "                             \n${END}"

clean:
			@/bin/rm -rf $(OBJS)

fclean:		clean
			@/bin/rm -rf $(NAME)

re:			fclean all

.PHONY:		all, clean, fclean, re
