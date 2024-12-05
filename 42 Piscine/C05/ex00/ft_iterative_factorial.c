/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:02:41 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/26 17:12:25 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", (ft_iterative_factorial(0)));
// }