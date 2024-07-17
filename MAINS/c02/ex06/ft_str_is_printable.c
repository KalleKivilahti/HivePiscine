#include <stdio.h>

int     ft_str_is_printable(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                while (str[i] < 32 || str[i] > 126)
                {
                        return (0);
                }
                i++;
        }
        return (1);
}

int main()
{
        char str[] = "SKQQ JD";

        ft_str_is_printable(str);
        printf("%d", ft_str_is_printable(str));

        return (0);
}

