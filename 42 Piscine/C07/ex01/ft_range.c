/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:21:14 by pprejith          #+#    #+#             */
/*   Updated: 2024/12/02 13:56:53 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*num;
	int	i;
	int	j;

	i = 0;
	j = min;
	range = max - min;
	num = (int *)malloc(range * 4);
	if (min >= max)
		return (NULL);
	while (i < range)
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}

// #include <stdio.h>
// int main()
// {
// 	int min = 5;
// 	int max = 10;
// 	int *range;
// 	int i=0;
// 	range = ft_range(min, max);
// 	while(i<(max-min))
// 	{
// 		printf("%d ", range[i]);
// 		i++;
// 	}

// 	return (0);
// }
