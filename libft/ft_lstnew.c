/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:10:20 by amsaoub           #+#    #+#             */
/*   Updated: 2022/10/25 12:16:02 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *list;
	
	list = NULL;
	list = malloc(sizeof(t_list));
	if (list != NULL)
	{
		list ->content=content;
		list -> next = NULL;
	}
	return (list);
}