#include <unistd.h>
#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
        unsigned int     i;
        unsigned int     d_size;

        d_size = 0;
        i = 0;
        while (dest[d_size])
        {
                d_size++;
        }
        while (i < nb && src[i])
        {       
                dest[d_size] = src[i];
                d_size++;
                i++;
        }       
        dest[d_size] = 0;
        return (dest);
}       

int main ()
{
	char src[] = " card games";
    char dest[50] = "are the best";
    
    ft_strncat(dest, src, 5);
    printf("%s", dest);
}
