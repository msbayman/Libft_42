/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:41:01 by amsaoub           #+#    #+#             */
/*   Updated: 2022/10/22 14:44:21 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(char const *s, int c)
{
	char	*str;

	str = (char *)s;
	while (1)
	{
		if (*str == (char)c)
			return (str);
		if (*str == 0)
			return (0);
		str++;
	}
	return (0);
}
