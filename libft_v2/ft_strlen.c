/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:46:53 by oozcan            #+#    #+#             */
/*   Updated: 2022/01/31 16:25:03 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/libft.h"

size_t ft_strlen(const char *str)
{
	unsigned int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
