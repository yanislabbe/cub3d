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
	char	*line;
    int		ret;

    int		F_r = -1, F_g = -1, F_b = -1;
    int		C_r = -1, C_g = -1, C_b = -1;

    while ((ret = get_next_line(fd, &line)) > 0)
    {
        if (ft_strncmp(line, "F ", 2) == 0)
        {
            char	**split = ft_split(line + 2, ',');
            if (split == NULL)
            {
                perror("Error splitting line");
                return (1);
            }
            if (ft_strslen(split) != 3)
            {
                perror("Invalid F line");
                return (1);
            }
            F_r = ft_atoi(split[0]);
            F_g = ft_atoi(split[1]);
            F_b = ft_atoi(split[2]);
            ft_free_split(split);
        }
        else if (ft_strncmp(line, "C ", 2) == 0)
        {
            char	**split = ft_split(line + 2, ',');
            if (split == NULL)
            {
                perror("Error splitting line");
                return (1);
            }
            if (ft_strslen(split) != 3)
            {
                perror("Invalid C line");
                return (1);
            }
            C_r = ft_atoi(split[0]);
            C_g = ft_atoi(split[1]);
            C_b = ft_atoi(split[2]);
            ft_free_split(split);
        }
        free(line);
    }
    if (ret == -1)
    {
        perror("Error reading file");
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
