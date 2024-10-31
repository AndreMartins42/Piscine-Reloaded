/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:40:01 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/15 13:10:51 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
/*int	*ft_range(int min, int max);
int	main(int argc, char **argv)
{
	int	min = atoi(argv[1]);
    int	max = atoi(argv[2]);
    int	*result;
    int	size;
	int i;

	result = ft_range(min, max);
	size = max - min;
	i = 0;
	while (i < size)
    {
		printf("%i ", result[i]);
        i++;
    }
    free(result);
}*/
int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*array;

	if (min == max)
		return (NULL);
	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
