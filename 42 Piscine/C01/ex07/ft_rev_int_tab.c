/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:53:58 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/19 22:13:03 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		j--;
		i++;
	}
}

/* #include <stdio.h>

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	size;

	size = 5;
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
}
 */