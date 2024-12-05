/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:44:16 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/20 22:29:46 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter])
	{
		if (str[letter] >= 'A' && str[letter] <= 'Z')
		{
			letter++;
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
	char str[4]="MEOW";
	printf("%d",ft_str_is_uppercase(str));
	return (0);
}  */