/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:18:21 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/15 10:18:27 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

/*int ft_iterative_factorial(int nb);

int main (int argc, char **argv)
{
	int nb = atoi(argv[1]);
	int result = ft_iterative_factorial(nb);
	printf("%i", result);
}*/

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	fact = 1;
	while (nb > 1)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
