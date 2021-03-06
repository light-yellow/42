#include <stdlib.h>

int	ft_isseparator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset += 1;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int count;
	
	count = 0;
	while (*str)
	{
		while (ft_isseparator(*str, charset))
			str += 1;
		if (*str)
		{
			count += 1;
			while (*str && !ft_isseparator(*str, charset))
				str += 1;
		}
	}
	return (count);
}

int	ft_wordlen(char *str, char *charset)
{
	int len;

	len = 0;
	while (*str && !ft_isseparator(*str, charset))
	{
		len += 1;
		str += 1;
	}
	return (len);
}

void	ft_strncpy(char *dst, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i += 1;
	}
	dst[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int	nwords;
	int	i;
	int	wordlen;
	char	*word;

	if (!str)
		return (NULL);
	nwords = ft_count_words(str, charset);
	if (result = (char **)malloc(sizeof(char *) * nwords + 1))
	{
		i = 0;
		while (*str && i < nwords)
		{
			while (ft_isseparator(*str, charset))
                        	str += 1;
			wordlen = ft_wordlen(str, charset);
			if (word = (char *)malloc(sizeof(char) * (wordlen + 1)))
				ft_strncpy(word, str, wordlen);
			str += wordlen;
			result[i++] = word;
		}
		result[i] = 0;
	}
	return (result);
}
