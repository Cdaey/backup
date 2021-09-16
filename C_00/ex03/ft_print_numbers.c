/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daechoi <daechoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:59:58 by daechoi           #+#    #+#             */
/*   Updated: 2021/09/16 15:49:21 by daechoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = 0;
	while (n <= 9)
	{
		write(1, &n, 1);
		n++;
	}
}

int main(void)
{
	ft_print_numbers();
}
