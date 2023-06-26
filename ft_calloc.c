/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseghier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:25:01 by lseghier          #+#    #+#             */
/*   Updated: 2023/05/25 17:11:03 by lseghier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include "libft.h"

//bzero avec un malloc, alloue et assigne 0 a chaque octet du bloc memoire

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	nmemb_size;
	size_t	i;

	nmemb_size = nmemb * size;
	i = 0;
	if (nmemb_size == 0)
		return (malloc(1));
	if (nmemb == 0 || size == 0 || nmemb != nmemb_size / size)
		return (NULL);
	ptr = malloc(nmemb_size);
	if (!ptr)
		return (NULL);
	while (nmemb_size > i)
		ptr[i++] = 0;
	return (ptr);
}
