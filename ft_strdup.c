/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseghier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:11:24 by lseghier          #+#    #+#             */
/*   Updated: 2023/05/27 17:24:44 by lseghier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>
#include<stdio.h>

/*size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

char	*ft_strdup(const char *src)
{
	char	*str;
	char	*src_casted;
	size_t	i;

	str = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!str)
		return (0x0);
	src_casted = (char *)src;
	i = 0;
	while (src_casted[i] != '\0')
	{
		str[i] = src_casted[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	const char *source = "Bonjour, monde !";
	char *duplicate;

	duplicate = ft_strdup(source);
	if (duplicate != NULL)
	{
		printf("Source : %s\n", source);
		printf("Duplicate : %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Erreur lors de l'allocation mémoire.\n");
	}
	return (0);
}*/
