/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:11:05 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/10/03 12:13:10 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *ss;
    unsigned char   cc;
    size_t  i;

    i = 0;
    cc = (unsigned char)c;
    ss = (unsigned char *)s;

    while (i < n)
    {
        if (ss[i] == cc)
            return ((void *)&ss[i]);
        i++;
    }
    return (NULL);
}
