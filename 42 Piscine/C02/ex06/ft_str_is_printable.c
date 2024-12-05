/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:46:01 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/20 22:29:41 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter])
	{
		if (str[letter] >= 32 && str[letter] <= 126)
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
	char str[15]="MEOW !@£$";
	printf("%d",ft_str_is_printable(str));
	return (0);
}   */