/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/03 12:11:05 by username         #+#    #+#              */
/*   Updated: 2026/10/17 13:58:54 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*tar;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	tar = malloc((len + 1) * sizeof(char));
	if (!tar)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		tar[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		tar[i + j] = s2[j];
		j++;
	}
	tar[i + j] = '\0';
	return (tar);
}
