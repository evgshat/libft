/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a19060383 <a19060383@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:19:05 by a19060383         #+#    #+#             */
/*   Updated: 2021/04/24 18:26:28 by a19060383        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// перепроверить путь в include
// удалить мейн
// надо ли заканчивать символом ('\0')? -- по заданию не надо

#include "../for_school21/libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (fd != 1)
		write(1, "NULL", 5);
	else
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
}

int main()
{
	ft_putstr_fd("hello", 2);
}