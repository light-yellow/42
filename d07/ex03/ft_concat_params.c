#include <stdlib.h>
#include <stdio.h>

int     ft_paramslen(int argc, char **argv)
{
    int     i;
    char    *param;
    int     len;

    i = 0;
    len = 0;
    while (i < argc)
    {
        param = argv[i];
        while (*param)
        {
            len += 1;
            param += 1;
        }
        i += 1;
    }
    len += argc - 1;
    return (len);
}

int     ft_strcat_idx(char *dest, char *src, int idx)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[idx] = src[i];
        i += 1;
        idx += 1;
    }
    return (idx);
}

char    *ft_concat_params(int argc, char **argv)
{
    int     param_idx;
    int     str_idx;
    int     len;
    char    *result;

    param_idx = 0;
    str_idx = 0;
    len = ft_paramslen(argc, argv);
    result = NULL;
    result = (char *)malloc(sizeof(char) * len);
    if (result)
    {
        while (param_idx < argc)
        {
            str_idx = ft_strcat_idx(result, argv[param_idx], str_idx);
            result[str_idx] = '\n';
            str_idx += 1;
            param_idx += 1;
        }
        result[str_idx - 1] = '\0';
    }
    return (result);    
}
