/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:50:36 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/18 20:50:46 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_str;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	dup_str = (char *)malloc(len + 1);
	if (!dup_str)
		return (NULL);
	ft_memcpy(dup_str, s, len + 1);
	return (dup_str);
}
