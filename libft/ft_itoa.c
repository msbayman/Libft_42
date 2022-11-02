/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:21:05 by amsaoub           #+#    #+#             */
/*   Updated: 2022/11/01 14:12:03 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	num_len(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = num_len(n);
	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n < 0)
	{
		i = 1;
		str[0] = '-';
		n *= -1;
	}
	while (len >= i)
	{
		str[len--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
