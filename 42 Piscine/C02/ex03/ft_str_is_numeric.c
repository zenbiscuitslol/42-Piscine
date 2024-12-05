/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:36:02 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/20 21:40:36 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	num;

	num = 0;
	while (str[num])
	{
		if ((str[num] >= '0' && str[num] <= '9'))
		{
			num++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	char str[25]="3323Bh6Tyu45678";
	printf("%d",ft_str_is_numeric(str));
	return (0);
}  */