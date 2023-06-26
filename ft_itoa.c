/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseghier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:53:44 by lseghier          #+#    #+#             */
/*   Updated: 2023/05/30 21:22:17 by lseghier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	len(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*tab;
	long	nbr;
	int		i;

	nbr = n;
	i = len(nbr);
	tab = malloc(sizeof(char) * len(nbr) + 1);
	tab[i] = '\0';
	if (!tab)
		return (NULL);
	i--;
	if (nbr < 0)
	{
		tab[0] = '-';
		nbr *= -1;
	}	
	if (nbr == 0)
		tab[0] = '0';
	while (nbr > 0)
	{
		tab[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (tab);
}
