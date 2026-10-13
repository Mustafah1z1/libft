/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:11:05 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/10/03 12:13:10 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int    ft_lstsize(t_list *lst)
{
    unsigned int    i;
    t_list  *temp;

    if (!lst)
    return (0);
    temp = lst;
    i = 0;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
        i++;
    }
    return (i + 1);
}