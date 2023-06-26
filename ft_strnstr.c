/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseghier <lseghier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 23:09:00 by lseghier          #+#    #+#             */
/*   Updated: 2023/05/25 19:27:41 by lseghier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static unsigned int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	to_find_len;

	if (to_find == NULL || str == NULL)
		if (n == 0)
			return ((char *)str);
	if (*to_find == '\0')
		return ((char *)str);
	if (*str == '\0')
		return (NULL);
	to_find_len = ft_len(to_find);
	while (*str && to_find_len <= n--)
	{
		if (!ft_memcmp(str, to_find, to_find_len))
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*haystack;
	const char	*needle;
	char		*result;
	size_t		len;

	haystack = "Hello, world!";
	needle = "world";
	len = 13;
	result = ft_strnstr(haystack, needle, len);
	if (result != NULL)
		printf("Needle found at position: %ld\n", result - haystack);
	else
		printf("Needle not found.\n");
	return (0);
}*/
