/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:41:37 by seralves          #+#    #+#             */
/*   Updated: 2025/05/18 17:42:28 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
t_lstnew
Prototype: t_list *ft_lstnew(void *content);
Turn in files -
Parameters content: The content to store in the new node.
Return value: A pointer to the new node
External functs.: malloc
Description: Allocates memory (using malloc(3)) and returns
a new node. The ’content’ member variable is
initialized with the given parameter ’content’.
The variable ’next’ is initialized to NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdio.h>

int main(void)
{
	char	*str = ft_strdup("Ola, mundo!");
	t_list  *lista;

	lista = ft_lstnew(str);
	printf("%s\n", (char *)lista->content);
	free(lista);
	return (0);
}*/