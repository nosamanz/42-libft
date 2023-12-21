/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:46:18 by oozcan            #+#    #+#             */
/*   Updated: 2022/02/05 16:52:39 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header/libft.h"/libft.h"

int ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
