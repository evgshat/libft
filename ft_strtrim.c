// мин тесты проходят

// перепроверить путь в include
// нужна ли проверка, если set больше, чем s1
// не уверена, что правильно поняла задание, сравнить, попробовать разные тесты
// удалить мейн
// "gahelloaa", "gaaa" - правильно ли работает?

#include "../for_school21/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		s;
	int		cnt;
	char	*new_s;

	i = 0;
	j = 0;
	s = 0;
	cnt = 0;
	while (s1[i] != '\0')
	{
		cnt++;
		i++;
	}
	new_s = (char *) malloc(cnt);
	if (new_s == 0)
		write (1, "NULL", 5);
	i = 0;
	while (s1[i] == set[j])
	{
		new_s[s] = s1[i + 1];
		i++;
		j++;
	}
	while (s1[i] != '\0')
	{
		new_s[s] = s1[i];
		s++;
		i++;
	}
	j = 0;
	while (s1[cnt - 1] == set[j])
	{
		new_s[s - 1] = '\0';
		cnt--;
		s--;
		j++;
	}
	return (new_s);
}

int	main(void)
{
	printf("%s\n", ft_strtrim("gahelloaa", "gaaa"));
}
