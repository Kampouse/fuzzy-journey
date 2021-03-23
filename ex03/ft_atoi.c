/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 07:58:55 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/23 08:24:21 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *value)
{
	int		base;
	int		nbr;
	char	*ptr;

	nbr = 0;
	base = 1;
	ptr = value;
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	while (*ptr == '-' || *ptr == '+')
	{	
		if (*ptr == '-')
			base *= -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		nbr *= 10;
		nbr += (int)(*ptr - '0');
		ptr++;
	}
	return (nbr * base);
}
