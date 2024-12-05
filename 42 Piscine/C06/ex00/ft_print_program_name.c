/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:39:49 by pprejith          #+#    #+#             */
/*   Updated: 2024/12/03 13:18:06 by pprejith         ###   ########.fr       */
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
	int	len;

	len = str_len(argv[0]);
	if (argc > 0)
	{
		write(1, argv[0], len);
		write(1, "\n", 1);
	}
	return (0);
}
