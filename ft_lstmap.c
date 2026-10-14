/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:11:05 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/10/03 12:13:10 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *newlist;
    t_list  *newnode;
    void    *con;

    if (!lst || !f || !del)
        return (NULL);
    
    newlist = NULL;
    while (lst)
    {
        con = f(lst->content);        
        newnode = ft_lstnew(con);
        if (!newnode)
        {
            if (con)
                del(con);
            ft_lstclear(&newlist, del);
            return (NULL);
        }
        ft_lstadd_back(&newlist, newnode);        
        lst = lst->next;
    }
    return (newlist);
}