/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:33:40 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/15 10:33:41 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(int argc, char **argv)
{
	int result = ft_recursive_factorial(atoi(argv[1]));

	printf("%i", result);
}*/

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		fact = ft_recursive_factorial(nb - 1) * nb;
	return (fact);
}
