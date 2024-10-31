/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:08:27 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/15 12:27:05 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **s1, char **s2);
void	ft_putstr(int size, char **str);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				i = 0;
			}
			j++;
		}
		i++;
	}
	ft_putstr(argc, argv);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_putstr(int size, char **str)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			ft_putchar(str[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
