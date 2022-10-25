/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:39:19 by amsaoub           #+#    #+#             */
/*   Updated: 2022/10/25 13:21:50 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *p;
	p = ft_lstlast(*lst);
	p->next=new;
	new->next=NULL;
}
