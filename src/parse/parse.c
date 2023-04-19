/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:32:00 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/19 10:32:07 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3d.h"

int	parse_first_step(int argc, char **argv)
{
	if (parse_arguments(argc) == 1)
	{
		return (1);
	}
	if (parse_map_name_argument(argv) == 1)
	{
		return (1);
	}
	return (0);
}

int	parse_second_step(char **argv)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		return (1);
	}
	close(fd);
	return (0);
}

int	parse(int argc, char **argv)
{
	if (parse_first_step(argc, argv) == 1)
	{
		return (1);
	}
	else if (parse_second_step(argv) == 1)
	{
		return (1);
	}
	return (0);
}
