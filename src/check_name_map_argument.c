/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_name_map_argument.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:52:47 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/18 20:53:46 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	print_name_map_error(char *err)
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
	print_name_map_error("MUST_END_WITH_CUB");
	return (1);
}

int	name_map_isspace(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_isspace(argv[i]) == 1)
		{
			print_name_map_error("UNSUPPORTED_CHARACTERS");
			return (1);
		}
		i++;
	}
	return (0);
}
