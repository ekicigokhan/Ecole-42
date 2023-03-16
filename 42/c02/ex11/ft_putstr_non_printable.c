/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekici <gekici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:40:20 by gekici            #+#    #+#             */
/*   Updated: 2023/02/17 20:41:38 by gekici           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(unsigned char word)
{
	char	buf[3];
	char	*hex;

	hex = "0123456789abcdef";
	buf[0] = '\\';
	buf[1] = hex[word / 16];
	buf[2] = hex[word % 16];
	write(1, buf, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str [i])
	{
		if (str[i] >= 32 && str [i] <= 126)
			write(1, &str[i], 1);
		else
			hexa(str[i]);
		i++;
	}
}
