/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:02:14 by amsaoub           #+#    #+#             */
/*   Updated: 2022/10/24 09:10:34 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	res;
	int				sign;
	int				k;

	i = 0;
	res = 0;
	sign = 1;
	k = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = sign * -1;
	}
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + (str[i++] - '0');
		k++;
	}
	return (res * sign);
}
