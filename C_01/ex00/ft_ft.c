/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daechoi <daechoi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:00:44 by daechoi           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/09/12 20:23:50 by daechoi          ###   ########.fr       */
=======
/*   Updated: 2021/09/13 15:36:46 by daechoi          ###   ########.fr       */
>>>>>>> 5b135e9dbeb96be69f53e908b154a79b3e117f8f
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int *n;

	*n = 0;
	ft_ft(n);
	printf("%d", *n);
	return 0;
}
