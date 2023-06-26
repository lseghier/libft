/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseghier <lseghier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:57:22 by lseghier          #+#    #+#             */
/*   Updated: 2023/05/17 22:14:29 by lseghier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (b);
}

/*int main()
{
    char str[50] = "Hello World!";
    printf("Before memset: %s\n", str);

    // Utilisation de ft_memset
    ft_memset(str, 'i', 49);

    printf("After memset: %s\n", str);
    return (0);
}*/
/*int i;
	i = 0;*/
/*while (ptr[i] < len)
	ptr[i] = (unsigned char)c;
	i++;*/
