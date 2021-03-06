/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 07:46:10 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/23 08:17:54 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char input)
{
	write(1, &input, 1);
}

void	ft_putnbr(int input)
{
	unsigned int	nbr;

	if (input < 0)
	{
		nbr = (unsigned int)(-1 * input);
		ft_putchar('-');
	}
	else
		nbr = (unsigned int)input;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}
