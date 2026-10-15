/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:24:26 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/10/01 20:09:19 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	x;
	unsigned char	*tar;

	i = 0;
	x = (unsigned char)c;
	tar = (unsigned char *)s;
	while (*tar != '\0')
	{
		tar++;
		i++;
	}
	while (*tar != x && i > 0)
	{
		tar--;
		i--;
	}
	if (*tar == x)
		return ((char *)tar);
	else
		return (NULL);
}
