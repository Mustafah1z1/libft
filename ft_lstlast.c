/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:11:05 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/10/03 12:13:10 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *temp;

    if (!lst)
        return (NULL);
    temp = lst;
    while (temp -> next != NULL)
        temp = temp -> next;
    return (temp);
}