/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:51:40 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/14 16:51:42 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int a = 5;
	int b = 10;
	
	printf("Antes a: %i b: %i", a, b);
	ft_swap(&a, &b);
	printf("\nDepois a: %i b: %i", a, b);
}*/
