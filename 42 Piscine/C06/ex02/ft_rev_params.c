/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:47:41 by pprejith          #+#    #+#             */
/*   Updated: 2024/12/03 13:18:24 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	i = argc - 1;
	if (argc > 0)
	{
		while (i > 0)
		{
			len = str_len(argv[i]);
			write(1, argv[i], len);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
