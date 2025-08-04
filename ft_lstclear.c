/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:19:21 by seralves          #+#    #+#             */
/*   Updated: 2025/05/19 14:19:29 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name: ft_lstclear
Prototype: void ft_lstclear(t_list **lst, void (*del)(void *));
Turn in files: -
Parameters: lst: The address of a pointer to a node.
del: The address of the function used to delete the content of the node.
Return value: None
External functs.: free
Description: Deletes and frees the given node and all its successors, using 
the function ’del’ and free(3). Finally, set the pointer to the list to NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*current;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		temp = current;
		current = current->next;
		(*del)(temp->content);
		free(temp);
	}
	*lst = NULL;
	return ;
}
/*
static void	del(void *element)
{
	free (element);
	return ;
}

#include <stdio.h>

int main(void)
{
	char	*str = ft_strdup("nodo velho");
	char	*strnew = ft_strdup("nodo novo");
	char	*strnewend = ft_strdup("nodo novo para fim");
	t_list  *lista;
	t_list	*novo_nodo;
	t_list	*nodo_fim;

	lista = ft_lstnew(str);
	novo_nodo = ft_lstnew(strnew);
	ft_lstadd_front(&lista, novo_nodo);
	nodo_fim = ft_lstnew(strnewend);
	ft_lstadd_back(&lista, nodo_fim);
	printf("1 %s ; 2 %s ; 3 %s\n", (char *)lista->content, 
		(char *)lista->next->content, (char *)lista->next->next->content);
	printf("tamanho: %d\n", ft_lstsize(lista));
	ft_lstclear(&lista, del);
	printf("tamanho apos ft_lstclear: %d\n", ft_lstsize(lista));
	return (0);
}*/