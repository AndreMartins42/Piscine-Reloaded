/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:00:32 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/14 16:00:35 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else if (n >= 0)
		ft_putchar('P');
}
/*
int main (void)
{
	int i = 6;
	int j = 0;
	int k = -10;

	ft_is_negative(i);
	ft_is_negative(j);
	ft_is_negative(k);
}*/
