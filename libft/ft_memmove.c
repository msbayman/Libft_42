/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:07:53 by amsaoub           #+#    #+#             */
/*   Updated: 2022/10/23 10:45:18 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((dst == src) || len == 0)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len)
	{
		len--;
		((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	return (dst);
}
