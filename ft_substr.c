/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseghier <lseghier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:57:15 by lseghier          #+#    #+#             */
/*   Updated: 2023/05/30 19:29:58 by lseghier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*- cree une sous chaine a partir d'une str
	en commencant a l'index start et de taille len
- exemple : ("Bonjour tout le monde", 3, 5) --> "jour "
*/
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str = malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	i = ft_strlen(s) - start;
	if (len > i)
		j = i;
	else
		j = len;
	str = malloc((j + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, j + 1);
	return (str);
}
