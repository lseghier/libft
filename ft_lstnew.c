

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello, 42!");
	if (!node)
	{
		printf("Erreur d'allocation de mémoire\n");
		return (1);
	}
	printf("Contenu du nœud : %s\n", (char *)node->content);
	printf("Contenu du nœud : %s\n", (char *)node->next);
	free(node);
	return (0);
}
