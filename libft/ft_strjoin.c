/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:48:59 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/19 10:49:00 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join_str;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join_str = (char *)malloc(s1_len + s2_len + 1);
	if (!join_str)
		return (NULL);
	ft_memcpy(join_str, s1, s1_len);
	ft_memcpy(join_str + s1_len, s2, s2_len + 1);
	return (join_str);
}
