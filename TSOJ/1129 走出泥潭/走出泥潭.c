#include <stdio.h>

int main(void)
{
    int map[100][100];
    int map_x, map_y, x, y;
    while (scanf("%d %d", &map_x, &map_y) != EOF)
    {
        x = 0;
        y = 0;
        for (int i = 0; i < map_x; i++)
        {
            for (int j = 0; j < map_y; j++)
            {
                scanf("%d", &map[i][j]);
            }
        }
        while (x != map_x - 1 || y != map_y - 1)
        {
            if (map[x + 1][y] == 1)
            {
                printf("(%d,%d)>", x + 1, y + 1);
                map[x][y] = 0;
                x++;
            }
            if (map[x][y + 1] == 1)
            {
                printf("(%d,%d)>", x + 1, y + 1);
                map[x][y] = 0;
                y++;
            }
        }
        printf("(%d,%d)\n", map_x, map_y);
    }
    return 0;
}
