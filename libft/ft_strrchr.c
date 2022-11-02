/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:53:05 by amsaoub           #+#    #+#             */
/*   Updated: 2022/11/01 14:41:36 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	data;

	data = (char) c;
	len = ft_strlen(s);
	if (data == 0)
		return ((char *)&s[len]);
	len--;
	while (len >= 0)
	{
		if ((char)s[len] == data)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}
