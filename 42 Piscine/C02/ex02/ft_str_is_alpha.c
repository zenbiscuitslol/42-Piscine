/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:40:53 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/20 21:34:53 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter])
	{
		if ((str[letter] >= 'A' && str[letter] <= 'Z') || (str[letter] >= 'a'
				&& str[letter] <= 'z'))
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
	char str[16]="jKSDjDjKLDjKLAv";
	printf("%d",ft_str_is_alpha(str));
	return (0);
}  */