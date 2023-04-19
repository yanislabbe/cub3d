/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:24:23 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/19 12:32:48 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_arguments(int fd, char **line)
{
	if (fd < 0 || line == NULL || BUFFER_SIZE <= 0)
		return (1);
	*line = ft_strdup("");
	if (*line == NULL)
		return (1);
	return (0);
}

/*
static char	*read_buffer(int fd, char *buffer)
{
	char	*line;
	int		ret;
	int		i;

	i = 0;
	ret = 1;
	while (ret > 0 && i < BUFFER_SIZE && buffer[i - 1] != '\n')
	{
		ret = read(fd, buffer + i, 1);
		if (ret == -1)
			return (NULL);
		if (buffer[i] == '\n')
			break ;
		i++;
	}
	buffer[i] = '\0';
	line = ft_strdup(buffer);
	if (line == NULL)
		return (NULL);
	return (line);
}
*/

static int	process_line(char **line, char *buffer, char *pos)
{
	char	*tmp;

	*pos = '\0';
	tmp = ft_strjoin(*line, buffer);
	if (tmp == NULL)
		return (-1);
	free(*line);
	*line = tmp;
	ft_memmove(buffer, pos + 1, BUFFER_SIZE - (pos - buffer));
	return (1);
}

int	get_next_line(int fd, char **line)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*pos;
	int			ret;

	if (check_arguments(fd, line) != 0)
		return (-1);
	ret = 1;
	while (ret > 0)
	{
		if (buffer[0] == '\0')
			ret = read(fd, buffer, BUFFER_SIZE);
		if (ret == -1)
			return (-1);
		if (ret == 0)
			break ;
		pos = ft_strchr(buffer, '\n');
		if (pos != NULL)
			return (process_line(line, buffer, pos));
		if (process_line(line, buffer, buffer + BUFFER_SIZE) == -1)
			return (-1);
		buffer[0] = '\0';
	}
	return (0);
}
