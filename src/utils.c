/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:52:08 by mrharoui          #+#    #+#             */
/*   Updated: 2023/07/05 02:14:26 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minitalk.h"

// //ascii to integer
// int	ft_atoi(const char *str)
// {
// 	int	i;
// 	int	result;

// 	i = 0;
// 	result = 0;
// 	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
// 		i++;
// 	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
// 	{
// 		if (str[i] == '-')
// 			ft_putchar('-');
// 		else if (str[i] >= '0' && str[i] <= '9')
// 		{
// 			result = result * 10 + str[i] - '0';
// 		}
// 		i++;
// 	}
// 	return (result);
// }

//envoyer le nombre de signaux equivalant au nombre de lettre dans la string
// void	send_lenght(pid_t pid_serveur, char *arv)
// {
// 	int	i;
// 	int bitcomp;

// 	bitcomp = 0;
// 	i = 0;
// 	while (arv[i] != 0)
// 		i++;
// 	i = ft_strlen(arv);
// 	while (i != 0)
// 	{
// 		if (*arv & bitcomp << i)
// 				kill(pid_serveur, SIGUSR1);
// 			else
// 				kill(pid_serveur, SIGUSR2);
// 		i--;
// 	}
// }

// void	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// }
