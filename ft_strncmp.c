/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jostraye <jostraye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:30:40 by jostraye          #+#    #+#             */
/*   Updated: 2017/09/30 22:43:31 by jostraye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, int n)
{
	int i;
	int result;

	result = 0;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return((unsigned char)str1[i] - (unsigned char)str2[i]);
		if (str1[i] == '\0' || str2[i] == '\0')
			return (0);
		i++;
	}
	return(0);
}