#include <stdio.h>

int main(void)
{
    int trees[100001] = {0};
    int num_trees, count;
    while (scanf("%d %d", &num_trees, &count) != EOF)
    {
        for (int i = 0; i < num_trees + 1; i++) //种树
        {
            trees[i] = 1;
        }
        for (int j = 0; j < count; j++)
        {
            int start, end;
            scanf("%d %d", &start, &end);
            for (int k = start; k < end + 1; k++)
            {
                trees[k] = 0;
            }
        }
        int live_tree = 0;

        for (int l = 0; l < num_trees + 1; l++)
        {
            if (trees[l] == 1)
                live_tree += 1;
        }
        printf("%d\n", live_tree);
    }
    return 0;
}
