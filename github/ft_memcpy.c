/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 00:49:10 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/09/28 17:22:28 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*de;
	const unsigned char	*sr;
	size_t				i;

	de = dest;
	sr = src;
	i = 0;
	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	return (dest);
}
