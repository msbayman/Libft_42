/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:35:37 by amsaoub           #+#    #+#             */
/*   Updated: 2022/11/01 14:13:27 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sa;
	size_t	sb;
	size_t	i;
	size_t	j;
	char	*rs;

	if (!s1 || !s2)
		return (NULL);
	sa = ft_strlen(s1);
	sb = ft_strlen(s2);
	i = 0;
	j = 0;
	rs = (char *)malloc(sizeof(char) * (sa + sb + 1));
	if (!rs)
		return (NULL);
	while (s1[i] != '\0')
		rs[j++] = s1[i++];
	i = 0;
	while (s2[i])
		rs[j++] = s2[i++];
	rs[j] = 0;
	return (rs);
}
