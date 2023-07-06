/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:18:28 by mrharoui          #+#    #+#             */
/*   Updated: 2023/05/24 13:40:16 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (src[i] != '\0' && i < n - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// size_t	ft_strlcpy(char *dest, const char *src, size_t n)
// {
// 	char	tailleS;
// 	char	tailleD;
// 	char	returnS;
// 	size_t	i;

// 	i = 0;
// 	tailleS = ft_strlen(src);
// 	tailleD = ft_strlen(dest);
// 	returnS = tailleD - tailleS;


// 	while (src[i] && dest[i] && dest[i] < (n - 1))
// 	{
// 		if (tailleD > tailleS)
// 		{
// 			dest[i] = returnS;
// 			i++;
// 		}
// 		dest[i] = '\0';
// 	}
// 	return (dest[i]);
// }

// int main()
// {
//     char src[] = "1234";
//     char dest[] = "12455678";
//     ft_strlcpy(dest,src,5);
//     printf("%s\n", dest);
//     return(0);
// }



// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list *new_lst;
// 	t_list *anew_lst;

// 	anew_lst = NULL;
// 	while (lst != NULL)
// 	{
// 		new_lst = ft_lstnew((*f)(lst->content));
// 		if (new_lst == NULL)
// 		{
// 			ft_lstclear(&anew_lst, del);
// 			break ;
// 		}
// 		ft_lstadd_back(&anew_lst, new_lst);
// 		lst = lst->next;
// 	}
// 	return (anew_lst);
// }
