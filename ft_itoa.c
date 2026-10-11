/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-oma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:11:05 by mabu-oma          #+#    #+#             */
/*   Updated: 2026/10/03 12:13:10 by mabu-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
char    *ft_itoa(int n)
{
 char *x;
 int  len;
 long nn;

 len = intlen(n);
 nn = n;

 x = malloc(sizeof(char) * (len + 1));
 if (!x)
 return (NULL);
if (nn < 0)
{
  x[0] = '-';
  nn *= -1;
}
if (nn == 0)
        x[0] = '0';
x[len] = '\0';
len--;
while (nn > 0)
{
  x[len] = (nn % 10) + 48;
  nn /= 10;
  len--;
}
return (x);
}