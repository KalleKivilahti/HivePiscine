#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     ft_str_is_lowercase(char *str)
{
        int     i;

        i = 0;
        while (str[i] != 0)
        {
                while (str[i] < 'a' || str[i] > 'z')
                {
                        return (0);
                }
                i++;
        }
        return (1);
}

int main()
{
        char str[] = "345";

        ft_str_is_lowercase(str);
        printf("%d", ft_str_is_lowercase(str));

        return (0);
} 
