/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:51:36 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/18 20:51:47 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed_str;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_isspace(s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_isspace(s1[end - 1]))
		end--;
	len = end - start;
	trimmed_str = ft_substr(s1, start, len);
	return (trimmed_str);
}
