/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharlet <lcharlet@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:40:07 by a19060383         #+#    #+#             */
/*   Updated: 2021/04/25 15:19:07 by lcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// мин тесты проходят

// вообще правильно поняла?
// перепроверить путь в include
// удалить мейн
// нужна ли проверка на fd = 1?

#include "../for_school21/libft.h"

void ft_putchar_fd(char c, int fd)
{
	if (fd != 1)
		write(1, "NULL", 5);
	else
		write(fd, &c, 1);
}

int main()
{
	ft_putchar_fd('-', 1);
}
