/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:03:54 by seralves          #+#    #+#             */
/*   Updated: 2025/05/19 17:03:57 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name: ft_lstmap
Prototype: t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));
Turn in files: -
Parameters: lst: The address of a pointer to a node.
f: The address of the function applied to each node’s content.
del: The address of the function used to delete a
node’s content if needed.
Return value The new list.
NULL if the allocation fails.
External functs.: malloc, free
Description: Iterates through the list ’lst’, applies the function ’f’ to 
each node’s content, and creates a new list resulting of the successive 
applications of the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		if (f)
			new_node = ft_lstnew((*f)(lst->content));
		else
			new_node = ft_lstnew(lst->content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	del(void *element)
{
	free (element);
	return ;
}*/
/*
void	*func(void *str)
{
	int	i = 0;
	char *new_str;
	new_str = (char *)str;
	while(new_str[i])
	{
		new_str[i] = *new_str[i] + 1;
		i++;
	}
	return ((void *)new_str);
}

#include <stdio.h>

int main(void)
{
	char	*str = ft_strdup("nodo velho");
	char	*strnew = ft_strdup("nodo novo");
	t_list  *lista;
	t_list	*novo_nodo;
	t_list	*nova_lista;
	
	lista = ft_lstnew(str);
	novo_nodo = ft_lstnew(strnew);
	ft_lstadd_front(&lista, novo_nodo);
	printf("lista inicial: 1 %s ; 2 %s\n", (char *)lista->content, 
		(char *)lista->next->content);
	nova_lista = ft_lstmap(lista, &func, del);
	printf("nova lista apos func: 1 %s ; 2 %s\n", (char *)nova_lista->content, 
		(char *)nova_lista->next->content);
	ft_lstclear(lista, del);
	ft_lstclear(nova_lista, del);
	return (0);
}*/

//codigo Mariana Lucena para testar 
//https://github.com/mari1lucena/libft/blob/main/ft_lstmap.c

/*
void	*ft_toupperr(void *c)
{
	int	i = 0;
	char *str;
	str = (char *)c;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return ((void *)str);
}
int main()
{
	t_list t1;
	t_list t2;
	t_list t3;
	t_list	*hd;
	t1.next = &t2;
	t2.next = &t3;
	t3.next = NULL;
	t1.content = ft_strdup("oi");
	t2.content = ft_strdup("ob");
	t3.content = ft_strdup("oc");
	hd = ft_lstmap(&t1, &ft_toupperr, free);
	printf(" %s\n %s\n %s\n", (char *)hd->content, (char *)hd->next->content, \
	(char *)hd->next->next->content);
}*/