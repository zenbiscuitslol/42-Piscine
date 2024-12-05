/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:30:03 by pprejith          #+#    #+#             */
/*   Updated: 2024/12/03 16:13:11 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int long	sq_root;

	sq_root = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while (sq_root * sq_root <= nb)
	{
		if (sq_root * sq_root == nb)
		{
			return (sq_root);
		}
		sq_root++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_sqrt(26));
// }