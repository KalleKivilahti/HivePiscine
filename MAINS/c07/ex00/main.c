
#include <stdio.h>
#include <stdlib.h>
#include "../../../c07/ex00/ft_strdup.c"

int main()
{
    char src[] = "hellogeyeah";
    char *dest = ft_strdup(src);
    printf("Og: %s\n", src);
    printf("Dupe: %s\n", dest);
    free(dest);
    return 0;
}
