/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:35:21 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/27 17:48:19 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	nb_half;
	int	i;
	int	check_prime;

	nb_half = nb / 2;
	i = 2;
	check_prime = 1;
	if (nb <= 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb_half)
	{
		if (nb % i == 0)
		{
			check_prime = 0;
			break ;
		}
		else
			check_prime = 1;
		i++;
	}
	return (check_prime);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d",ft_is_prime(234747));
// }