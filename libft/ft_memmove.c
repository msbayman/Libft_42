/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:07:53 by amsaoub           #+#    #+#             */
/*   Updated: 2022/11/01 14:12:36 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((dst == src) || len == 0)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len)
	{
		len--;
		((char *)dst)[len] = ((char *)src)[len];
	}
	return (dst);
}
