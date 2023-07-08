/* ************************************************************************** */
/*                                                       d8    ad888888b      */
/*                                                     d888   d88    888      */
/*   server.c                                        d8  88         a88       */
/*                                                  d8   88        d88        */
/*   By: mrharoui <mrharoui@student.42.fr>        d8     88      a88          */
/*                                              8888888888888  a8P            */
/*   Created: 2023/05/07 17:34:48 by mrharoui            88   d88             */
/*   Updated: 2023/07/07 05:12:08 by mrharoui            88   88888888888     */
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
	}
	else if (sig == SIGUSR2)
	{
		num = (num << 1) | 0;
		bit_count++;
	}
	lenght++;
	if (bit_count > 8)
		printf("%d\n", lenght);
	if (bit_count == 8)
	{
		write(1, &num, 1);
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
