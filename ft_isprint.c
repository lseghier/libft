/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseghier <lseghier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:21:20 by lseghier          #+#    #+#             */
/*   Updated: 2023/05/24 20:03:15 by lseghier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	char	c = 12;

	if (ft_isprint(c))
	{
		printf("v");
	}
	else
	{
		printf("f");
	}
}*/
