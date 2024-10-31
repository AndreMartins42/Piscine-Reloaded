/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:43:39 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/15 10:43:40 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>
#include <stdio.h>

int ft_sqrt(int nb);

int main(int argc, char **argv)
{
	int result = ft_sqrt(atoi(argv[1]));
	printf("%i", result);
}*/

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	x;

	sqrt = 0;
	x = 1;
	while (sqrt < nb)
	{
		sqrt = x * x;
		if (sqrt == nb)
			return (x);
		x++;
	}
	return (0);
}
