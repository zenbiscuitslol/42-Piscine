/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:57:00 by pprejith          #+#    #+#             */
/*   Updated: 2024/12/04 17:20:19 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = min;
	if (min == 0)
		size = max;
	else
		size = max - min;
	*range = (int *)malloc(((size)) * 4);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	out;
// 	int	i;

// 	min = 5;
// 	max = 10;
// 	i = 0;
// 	range = ft_range(&range, min, max);
// 	while (i < (max - min))
// 	{
// 		printf("%d ", range[i]);
// 		i++;
// 	}
// 	return (0);
// }
