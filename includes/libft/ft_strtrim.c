/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:02:13 by mrharoui          #+#    #+#             */
/*   Updated: 2022/12/11 04:51:20 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	front;
	unsigned int	rear;
	char	*str;

	if (!s1 && !set)
		return (NULL);
	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[rear - 1] && ft_strchr(set, s1[rear - 1]) && rear - 1 > front)
			rear--;
		str = (char *)malloc(sizeof(char) * (rear - front + 1));
		if (str)
			ft_strlcpy(str, &s1[front], rear - front + 1);
	}
	return (str);
}

/*int main()
{
	char s1[] = "yo salut yo";
	char set[] = "yo";
	char *str;

	str = ft_strtrim(s1, set);
	printf("new string: %s\n", str);
	return (0);
}*/