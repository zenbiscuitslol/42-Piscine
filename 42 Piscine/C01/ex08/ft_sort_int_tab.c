/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:43:34 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/19 22:28:58 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

/* #include <stdio.h>

int	main(void)
{
	int tab[5]={3,4,5,2,1};
	int size=5;
	for(int i=0; i<size; i++)
		printf("%d",tab[i]);
	ft_sort_int_tab(tab,size);
	for(int i=0; i<size; i++)
		printf("%d",tab[i]);
}  */