/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:03:16 by amsaoub           #+#    #+#             */
/*   Updated: 2022/10/26 12:14:29 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *p;
	t_list *c;
	p=*lst;
	
	while (p!=NULL)
	{
		c=p;
		p=p->next;
		del(c->content);
		free(c);
	}
	*lst=NULL;
}