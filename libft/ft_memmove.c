/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:15:47 by ylabbe            #+#    #+#             */
/*   Updated: 2023/04/19 11:15:51 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	if (dest == src)
		return (dest);
	if (dest < src)
	{
		ptr_dest = (unsigned char *)dest;
		ptr_src = (const unsigned char *)src;
		while (n-- > 0)
			*ptr_dest++ = *ptr_src++;
	}
	else
	{
		ptr_dest = (unsigned char *)dest + n;
		ptr_src = (const unsigned char *)src + n;
		while (n-- > 0)
			*--ptr_dest = *--ptr_src;
	}
	return (dest);
}
