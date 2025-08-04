/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:51:14 by seralves          #+#    #+#             */
/*   Updated: 2025/05/18 19:51:19 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name: ft_lstadd_back
Prototype: void ft_lstadd_back(t_list **lst, t_list *new);
Turn in files: -
Parameters: lst: The address of a pointer to the first node of a list.
new: The address of a pointer to the node to be added.
Return value: None
External functs.: None
Description: Adds the node ’new’ at the end of the list.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (lst && new)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	return ;
}
/*
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
	free (lista->next->next);
	free (lista->next);
	free (lista);
	return (0);
}*/