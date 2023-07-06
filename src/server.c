/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:34:48 by mrharoui          #+#    #+#             */
/*   Updated: 2023/07/05 02:02:50 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minitalk.h"

void	ft_get_binary(int sig)
{
	static int				bit_count;
	static int				lenght;
	static unsigned char	num;
	
	if (sig == SIGUSR1)
	{
		num = (num << 1) | 1;
		bit_count++;
		lenght++;
	}
	else if (sig == SIGUSR2)
	{
		num = (num << 1) | 0;
		bit_count++;
		lenght++;
	}
	if (lenght == 32)
	{
		printf("%d\n", lenght);
	}
	if (bit_count == 8)
	{
		ft_putchar(num);
		num = 0;
		bit_count = 0;
	}
}

int	main()
{
	printf("pid: %d\n", getpid());
		signal(SIGUSR1, ft_get_binary);
		signal(SIGUSR2, ft_get_binary);
	while (1)
		pause();
	return (0);
}