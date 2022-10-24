/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:26:54 by amsaoub           #+#    #+#             */
/*   Updated: 2022/10/23 15:23:11 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	w_counter(char *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i] != '\0')
			counter++;
		while (s[i] != c && s[i])
			i++;
	}
	return (counter);
}

void	free_all(char **str)
{
	int	i;

	i = 0;
	if (!str[i])
	{
		while (str[i] != '\0')
		{
			free (str[i]);
			i++;
		}
		free (str);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s)
		return (0);
	str = (char **)malloc((w_counter((char *)s, c) + 1) * sizeof(char *));
	if (!str)
		return (0);
	start = 0;
	i = 0;
	while (i < w_counter((char *)s, c))
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		end = start;
		while (s[end] != c && s[end] != '\0')
			end++;
		str[i++] = ft_substr((char *)s, start, end - start);
		free_all(str);
		start = end;
	}
	*(str + i) = NULL;
	return (str);
}
