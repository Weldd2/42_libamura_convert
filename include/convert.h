/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:45:50 by antoinemura       #+#    #+#             */
/*   Updated: 2024/12/17 17:40:26 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include <stdlib.h>
# include "math.h"

int		convert_bin_to_int(char *s);
int		convert_atoi_base(char *nbr, char *base);
char	*convert_itoa(int n);
int		convert_atoi(const char *nptr);

#endif