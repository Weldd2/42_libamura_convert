/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_bin_to_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:22:37 by antoinemura       #+#    #+#             */
/*   Updated: 2024/12/17 17:39:27 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

int	convert_bin_to_int(char *s)
{
	int	ite;
	int	res;
	int	temp;

	res = 0;
	ite = 7;
	while (ite >= 0)
	{
		temp = *(s + 7 - ite) - '0';
		res += temp * math_pow(2, ite);
		ite--;
	}
	return (res);
}
