/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:31:59 by amsaoub           #+#    #+#             */
/*   Updated: 2022/11/01 14:12:41 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int x, size_t i)
{
	unsigned char	*k;
	size_t			b;

	b = 0;
	k = str;
	while (b < i)
	{
		k[b] = (unsigned char)x ;
		b++;
	}
	return (str);
}
