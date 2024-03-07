#include <stdio.h>
int main()
{
    int i, j;
    printf("Enter number of rows:");
    scanf("%d", &i);
    printf("Enter number of columns:");
    scanf("%d", &j);
    int M[i][j];
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("Enter M[%d][%d]: ", x + 1, y + 1);
            scanf("%d", &M[i][j]);
        }
    }
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("%d ", M[x][y]);
        }
        printf("\n");
    }
    int MT[j][i];
    for (int x = 0; x < j; x++)
    {
        for (int y = 0; y < i; y++)
        {
            MT[x][y] = M[y][x];
        }
    }
    printf("Transpose Mtrix:\n");
    for (int x = 0; x < j; x++)
    {
        for (int y = 0; y < i; y++)
        {
            printf("%d ", MT[x][y]);
        }
        printf("\n");
    }
}