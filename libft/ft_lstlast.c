/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:10:53 by amsaoub           #+#    #+#             */
/*   Updated: 2022/10/26 12:30:21 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(lst==NULL)
	{
		return NULL;
	}
	else
	{
		while(lst->next != NULL)
		lst = lst->next;
	return lst;
	}
	
}