/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 18:29:38 by seralves          #+#    #+#             */
/*   Updated: 2025/05/18 18:29:43 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name: ft_lstadd_front
Prototype: void ft_lstadd_front(t_list **lst, t_list *new);
Turn in files: -
Parameters lst: The address of a pointer to the first node of a list.
new: The address of a pointer to the node to be added.
Return value: None
External functs.: None
Description: Adds the node ’new’ at the beginning of the list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
	return ;
}
/*
#include <stdio.h>

int main(void)
{
	char	*str = ft_strdup("nodo velho");
	char	*strnew = ft_strdup("nodo novo");
	t_list  *lista;
	t_list	*novo_nodo;

	lista = ft_lstnew(str);
	novo_nodo = ft_lstnew(strnew);
	ft_lstadd_front(&lista, novo_nodo);
	printf("1 %s ; 2 %s\n", (char *)lista->content, 
		(char *)lista->next->content);
	free (lista->next);
	free (lista);
	return (0);
}*/
