/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daechoi <daechoi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:49:30 by daechoi           #+#    #+#             */
/*   Updated: 2021/09/18 23:15:12 by daechoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HEADER_H
# define HEADER_H

int	*g_input;

int	**g_arr;

int		ft_is_correct(int x, int y, int n);

void	ft_backtracking(int x, int y, int n);

#endif
