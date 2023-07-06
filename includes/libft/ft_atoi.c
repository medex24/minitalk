/* ************************************************************************** */
/*                                                       d8    ad888888b      */
/*                                                     d888   d88    888      */
/*   ft_atoi.c                                       d8  88         a88       */
/*                                                  d8   88        d88        */
/*   By: mrharoui <mrharoui@student.42.fr>        d8     88      a88          */
/*                                              8888888888888  a8P            */
/*   Created: 2022/11/08 11:13:08 by mrharoui            88   d88             */
/*   Updated: 2023/05/28 14:07:25 by mrharoui            88   88888888888     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		if (str[i] == '-')
			ft_putchar('-');
		else if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
		}
		i++;
	}
	return (result);
}

/*int main()
{
	char str1[] = "s";
	int x = ft_atoi(str1);
	printf("The number is %d\n", x);
	return (0);
}*/
