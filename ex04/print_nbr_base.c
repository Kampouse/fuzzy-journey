/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 08:41:09 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/23 11:38:57 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	ft_str_len(char *input)
{
	int		lenght;
	char	*start;

	lenght = 0;
	start = input;
	while (*start != '\0')
	{
		start++;
		lenght++;
	}
	return (lenght);
}

void	ft_putchar(char input)
{
	write(1, &input, 1);
}

void	ft_putnbr(int input, unsigned int base)
{
	unsigned int	nbr;

	if (input < 0)
	{
		nbr = (unsigned int)(-1 * input);
		ft_putchar('-');
	}
	else
		nbr = (unsigned int) input;
	if (nbr >= base)
	{
		ft_putnbr(nbr / base, base);
		ft_putnbr(nbr % base, base);
	}
	else
		ft_putchar(nbr + '0');
}

void	ft_print_nbr_base(int nbr,	 char *base)
{
	unsigned int	uni;

	uni = nbr;
	uni = ft_str_len(base);
	ft_putnbr(nbr, uni);
}


int main(void)
{
	ft_print_nbr_base(,"aaaaaaaaaaaaaaaa");
}
