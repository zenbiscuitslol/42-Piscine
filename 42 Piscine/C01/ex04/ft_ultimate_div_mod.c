/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:44:32 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/19 22:08:09 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* #include <stdio.h>
int	main(void)
{
	int a;
	int b;
	a = 9;
	b = 4;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n",a);
	printf("%d\n", b);
	return (0);
} */