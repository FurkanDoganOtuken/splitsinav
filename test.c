
#include <stdlib.h>
// Temiz sınav spliti ~enes
char	**ft_split(char *str, char c)
{
	int		i;
	char	**split;
	char	*string;
	int		j;

	j = 0;
	i = 0;
	split = (char **)malloc(sizeof(char *) * 1024);
	while (*str)
	{
		if (*str != c)
		{
			string = malloc(sizeof(char) * 1024);
			while (*str != c && *str)
			{
				string[j] = *str;
				str++;
				j++;
			}
			string[j] = 0;
			split[i] = string;
			j = 0;
		}
		i++;
		if (*str != 0)
			str++;
	}
	split[i] = NULL;
	return (split);
}

#include <stdio.h>

int	main(void)
{
	char	**splitted;
	int		i;

	splitted = ft_split("merhaba,enes,test,a", ',');
	i = -1;
	while (i++, splitted[i] != NULL)
	{
		printf("%d. indexteki deger = %s\n", i, splitted[i]);
		free(splitted[i]);
	}
	printf("sonuncu = %s", splitted[i]);
	free(splitted);
}
