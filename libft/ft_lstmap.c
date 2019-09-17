/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosella <erosella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:07:26 by erosella          #+#    #+#             */
/*   Updated: 2019/09/08 14:11:16 by erosella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;

	if (lst && *f)
	{
		newlst = (*f)(lst);
		if (newlst && lst->next)
			newlst->next = ft_lstmap(lst->next, f);
		return (newlst);
	}
	return (0);
}
