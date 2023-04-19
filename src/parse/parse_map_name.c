/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_name_map_argument.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:52:47 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/19 10:32:55 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3d.h"

void	print_map_name_error(char *err)
{
	if (ft_strcmp(err, "MUST_END_WITH_CUB") == 0)
	{
		printf("Error! The map must end with '.cub'.\n");
	}
	else if (ft_strcmp(err, "UNSUPPORTED_CHARACTERS") == 0)
	{
		printf("Error! There are unsupported characters in the map name.\n");
	}
}

int	map_ends_with_cub(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		i++;
	}
	if (argv[i - 1] == 'b' && argv[i - 2] == 'u' && argv[i - 3] == 'c'
		&& argv[i - 4] == '.')
	{
		return (0);
	}
	print_map_name_error("MUST_END_WITH_CUB");
	return (1);
}

int	map_name_isspace(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_isspace(argv[i]) == 1)
		{
			print_map_name_error("UNSUPPORTED_CHARACTERS");
			return (1);
		}
		i++;
	}
	return (0);
}

int	parse_map_name_argument(char **argv)
{
	if (map_ends_with_cub(argv[1]) == 1)
	{
		return (1);
	}
	else if (map_name_isspace(argv[1]) == 1)
	{
		return (1);
	}
	return (0);
}
