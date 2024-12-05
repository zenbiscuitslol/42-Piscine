/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:41:29 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/20 22:29:50 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter])
	{
		if (str[letter] >= 'a' && str[letter] <= 'z')
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
	char str[4]="meow";
	printf("%d",ft_str_is_lowercase(str));
	return (0);
}  */