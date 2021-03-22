/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 17:07:59 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/22 15:31:51 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h" 

int	ft_strlen(char *str)
{
	char	*start;
	int		i;

	start = str;
	i = 0;
	while (*start != '\0')
	{
		start++;
		i++;
	}
	return (i);
}