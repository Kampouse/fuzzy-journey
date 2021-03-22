/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 07:46:10 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/22 07:57:26 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
void	ft_putchar(char input)
{
	write(1, &input, 1);
}

void	ft_putnbr(int input)
{
	if (input < 0)
		 input = -input;
	if (input < 10)
		ft_putchar(input + '0');
	else
	{
		ft_putnbr(input / 10);
		ft_putnbr(input % 10);
	}	
}
