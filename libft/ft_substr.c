/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:29:00 by amsaoub           #+#    #+#             */
/*   Updated: 2022/11/01 14:13:55 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*str;

	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	str = (char *) malloc(len + 1);
	if (!str)
		return (NULL);
	while (s[start] && j < len)
		str[j++] = s[start++];
	str[j] = '\0';
	return (str);
}
