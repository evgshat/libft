/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a19060383 <a19060383@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:08:06 by a19060383         #+#    #+#             */
/*   Updated: 2021/04/22 12:03:25 by a19060383        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// мин тесты проходят

// удалить мейн
// перепроверить путь в include
// пофиксить шапку (надо чтобы мое имя было)
// проверить, если пустое значение

#include "../for_school21/libft.h"

char *ft_itoa(int n)
{
	char *new_s;
	int i;
	int n_o[15];
	int n_o_i;

	i		= 0;
	n_o_i	= 0;

	new_s = (char *)malloc(15 * sizeof(char));
	if (new_s == 0)
		write (1, "NULL", 5);
	if (n < 0)
	{
		new_s[i] = '-';
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n_o[n_o_i] = n % 10;
		n = n / 10;
		n_o_i++;
	}
	new_s[i] = n + '0';
	while (n_o_i-1 >= 0)
	{
		i++;
		new_s[i] = n_o[n_o_i-1] + '0';
		n_o_i--;
	}
	return (new_s);
}

int main()
{
	printf ("%s\n", ft_itoa(10));
}