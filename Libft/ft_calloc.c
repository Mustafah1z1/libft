/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:11:05 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/10/17 13:33:02 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void			*p;
	size_t			i;
	unsigned char	*temp;

	if (num != 0 && (num * size) / num != size)
		return (NULL);
	p = malloc(num * size);
	if (!p)
		return (NULL);
	temp = (unsigned char *)p;
	i = 0;
	while (i < (num * size))
	{
		temp[i] = 0;
		i++;
	}
	return (p);
}
