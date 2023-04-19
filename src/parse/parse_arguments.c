/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number_of_arguments.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:53:54 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/18 20:54:00 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3d.h"

void	print_arguments_error(char *err)
{
	if (ft_strcmp(err, "AN_ARGUMENT_IS_MISSING") == 0)
	{
		printf("Error! An argument is missing, that of the map.\n");
	}
	else if (ft_strcmp(err, "TOO_MANY_ARGUMENTS") == 0)
	{
		printf("Error! There are too many arguments.\n");
	}
}

int	an_argument_is_missing(int argc)
{
	if (argc < 2)
	{
		print_arguments_error("AN_ARGUMENT_IS_MISSING");
		return (1);
	}
	return (0);
}

int	too_many_arguments(int argc)
{
	if (argc > 2)
	{
		print_arguments_error("TOO_MANY_ARGUMENTS");
		return (1);
	}
	return (0);
}

int	parse_arguments(int argc)
{
	if (an_argument_is_missing(argc) == 1)
	{
		return (1);
	}
	else if (too_many_arguments(argc) == 1)
	{
		return (1);
	}
	return (0);
}
