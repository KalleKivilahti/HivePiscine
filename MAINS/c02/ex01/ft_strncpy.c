#include <unistd.h>
#include <string.h>
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
        unsigned int    i;

        i = 0;
        while (src[i] != 0 && i < n)
        {
                dest[i] = src[i];
                i++;
        }
        while (i < n)
        {
                dest[i] = 0;
                i++;
        }
        return (dest);
}

int     main()
{
        char src[] = "Nobugs!";
        char dest[100];

        ft_strncpy(dest, src, 6);
        printf("Copy: %s", dest);

        return (0);
}
