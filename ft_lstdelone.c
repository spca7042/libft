/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:38:56 by seralves          #+#    #+#             */
/*   Updated: 2025/05/18 20:38:59 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name: ft_lstdelone
Prototype: void ft_lstdelone(t_list *lst, void (*del)(void *));
Turn in files: -
Parameters: lst: The node to free.
del: The address of the function used to delete the content.
Return value: None
External functs.: free
Description: Takes a node as parameter and frees its content using the 
function ’del’. Free the node itself but does NOT free the next node.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
	return ;
}
/*
static void	del(void *element) //not working well
{
	element = NULL;
	//free (element);
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
	ft_lstdelone(&lista, del);
	printf("1 %s ; 2 %s\n", (char *)lista->content, 
		(char *)lista->next->content);
	free (lista->next);
	free (lista);
	return (0);
}*/