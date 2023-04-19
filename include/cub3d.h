/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:30:01 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/19 10:30:36 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

/*  parse.c */
int		parse_first_step(int argc, char **argv);
int		parse(int argc, char **argv);

/*  parse_arguments.c */
void	print_arguments_error(char *err);
int		an_argument_is_missing(int argc);
int		too_many_arguments(int argc);
int		parse_arguments(int argc);

/*  parse_map_name.c */
void	print_map_name_error(char *err);
int		map_ends_with_cub(char *argv);
int		map_name_isspace(char *argv);
int		check_map_name_argument(char **argv);
int		parse_map_name_argument(char **argv);

#endif
