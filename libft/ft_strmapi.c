/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:53:38 by amsaoub           #+#    #+#             */
/*   Updated: 2022/10/23 12:46:38 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*norminat;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	norminat = malloc((len + 1) * sizeof (char));
	if (!norminat)
		return (0);
	while ((char)s[i])
	{
		norminat[i] = f(i, s[i]);
		i++;
	}
	norminat[i] = 0;
	return (norminat);
}
