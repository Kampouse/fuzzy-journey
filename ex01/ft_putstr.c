/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 07:36:11 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/22 07:43:57 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char input)
{
	write(1, &input, 1);
}	

void	ft_putstr(char *str)
{
	char	*copy;

	copy = str;
	while (*copy)
	{
		ft_putchar(*copy);
		copy++;
	}
}
