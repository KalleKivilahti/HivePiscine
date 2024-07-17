#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
#include "functions.h"

int main() 
{
    int example_map[5][5] = { {1, 0, 1, 0, 0},
                              {0, 0, 0, 1, 0},
                              {1, 0, 0, 0, 1},
                              {0, 1, 0, 0, 0},
                              {0, 1, 0, 0, 0}
    };
    t_q sqr;
    int i;
    int j;
    sqr.obstacle = 1;
    sqr.row = 5;
    sqr.col = 5;
    int **map_ptr = (int **)malloc(sqr.row * sizeof(int*));
    
    i = 0;
    while (i < sqr.row) 
    {
        map_ptr[i] = (int *)malloc(sqr.col * sizeof(int));
        j = 0;
        while (j < sqr.col) 
        {
            map_ptr[i][j] = example_map[i][j];
            j++;
        }
        i++;
    }
    calc_sqr(map_ptr, &sqr);
    draw_biggest_square(sqr, map_ptr);
    print_map(sqr,  map_ptr);
    i = 0;
    while (i < sqr.row) 
        free(map_ptr[i++]);
    free(map_ptr);
    return 0;
}