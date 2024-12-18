/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:45:09 by marvin            #+#    #+#             */
/*   Updated: 2024/12/17 17:35:30 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

int	convert_atoi(const char *nptr)
{
	int	signe;
	int	total;

	signe = 1;
	total = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signe = -signe;
		nptr++;
	}
	while (*nptr <= '9' && *nptr >= '0')
	{
		total = total * 10;
		total += (*nptr - '0');
		nptr++;
	}
	return (total * signe);
}
