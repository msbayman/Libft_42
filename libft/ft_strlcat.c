/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:54:42 by amsaoub           #+#    #+#             */
/*   Updated: 2022/11/01 14:39:24 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ld;
	size_t	ls;

	ls = ft_strlen(src);
	if (dstsize == 0)
		return (ls);
	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	if (ld > dstsize)
		return (ls + dstsize);
	return (ld + ft_strlcpy(&dst[ld], src, dstsize - ld));
}
