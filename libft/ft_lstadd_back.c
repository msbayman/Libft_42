/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:39:19 by amsaoub           #+#    #+#             */
/*   Updated: 2022/10/26 12:27:19 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst==0)
{
	*lst=new;
	new->next=NULL;
}
else{
	t_list *p;
	p = ft_lstlast(*lst);
	p->next=new;
	new->next=NULL;
}
	
}
