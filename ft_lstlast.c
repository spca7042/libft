/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:32:07 by seralves          #+#    #+#             */
/*   Updated: 2025/05/18 19:32:13 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name: ft_lstlast
Prototype: t_list *ft_lstlast(t_list *lst);
Turn in files: -
Parameters: lst: The beginning of the list.
Return value: Last node of the list
External functs.: None
Description: Returns the last node of the list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int main(void)
{
	char	*str = ft_strdup("nodo velho");
	char	*strnew = ft_strdup("nodo novo");
	t_list  *lista;
	t_list	*novo_nodo;
	t_list	*ultimo_nodo;

	lista = ft_lstnew(str);
	novo_nodo = ft_lstnew(strnew);
	ft_lstadd_front(&lista, novo_nodo);
	ultimo_nodo = ft_lstlast(lista);
	printf("1 %s ; 2 %s\n", (char *)lista->content, 
		(char *)lista->next->content);
	printf("ultimo elemento: %s \n", (char *)ultimo_nodo->content);
	free (lista->next);
	free (lista);
	return (0);
}*/