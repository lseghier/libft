/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseghier <lseghier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:27:05 by lseghier          #+#    #+#             */
/*   Updated: 2023/05/17 19:04:25 by lseghier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	int c = 0x80;

	if(ft_isascii(c))
	{
		printf("v");
	}
	else
	{
		printf("f");
	}
}*/
