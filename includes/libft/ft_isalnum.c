/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:21:25 by mrharoui          #+#    #+#             */
/*   Updated: 2022/10/30 17:43:36 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int alpha)
{
	if (alpha >= 48 && alpha <= 57)
		return (1);
	else if ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122))
		return (1);
	else
		return (0);
}
