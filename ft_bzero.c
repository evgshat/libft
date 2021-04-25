/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharlet <lcharlet@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 18:31:41 by a19060383         #+#    #+#             */
/*   Updated: 2021/04/25 15:41:55 by lcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// перепроверить путь в include
// удалить мейн
// поправить шапку
// ответ должен быть пустым?
// нужно ли  проверять, что n не больше, чем символов в строке s?
// нужен ли write?
// можно ли как-то проверить оригинальную функцию?

#include "../for_school21/libft.h"

void ft_bzero(void *s , size_t  n )
{
	unsigned char *new_s;
	int i;

	new_s = (unsigned char *)s;
	i = 0;

	while (i < n)
	{
		new_s[i] = '\0';
		i++;
	}
	while (new_s[i] != '\0')
	{
		i++;
	}
}

int main()
{
	unsigned char scr[7] = "abcde\0";

	printf ("%s\n", bzero(scr, 2));
	ft_bzero(scr, 2);
}
