/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:47:48 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/19 10:47:52 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

# define BUFFER_SIZE 1

char	*get_next_line(int fd);

#endif
