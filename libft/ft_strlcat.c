/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:54:42 by amsaoub           #+#    #+#             */
/*   Updated: 2022/10/23 11:01:47 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	ld;
	size_t	ls;

	i = 0;
	if ((!src || !dst) && dstsize == 0)
		return (0);
	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	if (!dst || dstsize == 0)
		return (ls);
	if (dstsize == 0)
	{
		return (ls);
	}
	if (ld > dstsize)
		return (ls + dstsize);
	return (ld + ft_strlcpy(&dst[ld], src, dstsize - ld));
}
