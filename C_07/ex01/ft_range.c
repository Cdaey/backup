/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daechoi <daechoi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:26:42 by daechoi           #+#    #+#             */
/*   Updated: 2021/09/22 17:08:02 by daechoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int				*arr;
	unsigned int	arr_len;
	int				i;

	if (min >= max)
		return (0);
	arr_len = max - min;
	arr = (int *)malloc(arr_len * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
