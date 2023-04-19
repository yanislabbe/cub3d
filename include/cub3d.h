#ifndef CUB3D_H
# define CUB3D_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

/*  check_number_of_arguments.c */
void    print_number_of_arguments_error(char *err);
int     an_argument_is_missing(int argc);
int     too_many_arguments(int argc);
int     check_number_of_arguments(int argc);

/*  check_name_map_argument.c */
void    print_name_map_error(char *err);
int     map_ends_with_cub(char *argv);
int     name_map_isspace(char *argv);
int     check_name_map_argument(char **argv);

/*  more.c */
char    *ft_strtrim(char const *s1);
int     ft_isspace(int c);
char    *ft_substr(char const *s, unsigned int start, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
char    *ft_strdup(const char *s);
void    *ft_memcpy(void *dst, const void *src, size_t n);
size_t  ft_strlen(const char *s);
int     ft_strcmp(const char *s1, const char *s2);

#endif