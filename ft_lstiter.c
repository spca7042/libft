/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:25:18 by seralves          #+#    #+#             */
/*   Updated: 2025/05/19 16:25:24 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name: ft_lstiter
Prototype: void ft_lstiter(t_list *lst, void (*f)(void *));
Turn in files: -
Parameters: lst: The address of a pointer to a node.
f: The address of the function to apply to each node’s content.
Return value: None
External functs.: None
Description: Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
	return ;
}
/*
void	func(char *str)
{
	while(str)
	{
		*str = *str + 1;
		str++;
	}
	return ;
}

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
	t_list  *lista;
	t_list	*novo_nodo;
	
	lista = ft_lstnew(str);
	novo_nodo = ft_lstnew(strnew);
	ft_lstadd_front(&lista, novo_nodo);
	printf("antes: 1 %s ; 2 %s\n", (char *)lista->content, 
		(char *)lista->next->content);
	ft_lstiter(lista, &func);
	printf("apos func: 1 %s ; 2 %s\n", (char *)lista->content, 
		(char *)lista->next->content);
	ft_lstclear(lista, del);
	return (0);
}*/