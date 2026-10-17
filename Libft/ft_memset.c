/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:16:02 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/09/24 21:14:35 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	ch;
	size_t			i;

	ss = s;
	ch = c;
	i = 0;
	while (i < n)
	{
		ss[i] = ch;
		i++;
	}
	return (s);
}
