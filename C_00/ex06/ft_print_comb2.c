/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daechoi <daechoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:50:05 by daechoi           #+#    #+#             */
/*   Updated: 2021/09/16 15:54:42 by daechoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_comb2(void)
{
	 int	a;
	 int	b;
	char	buf[7];

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			buf[0] = a / 10 + 48;
			buf[1] = a % 10 + 48;
			buf[2] = ' ';
			buf[3] = b / 10 + 48;
			buf[4] = b % 10 + 48;
			buf[5] = ',';
			buf[6] = ' ';
			if (a == 98 && b == 99)
				write(1, &buf, 5);
			else
				write(1, &buf, 7);
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb2();
}
