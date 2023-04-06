#include <stdio.h>
#define COL 10
#define ROW 6

const int arr[ROW][COL] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {4, 5, 5, 5, 5, 5, 5, 5, 5, 2},
    {4, 8, 9, 9, 9, 9, 9, 9, 6, 2},
    {4, 8, 11, 11, 11, 11, 11, 10, 6, 2},
    {4, 7, 7, 7, 7, 7, 7, 7, 6, 2},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 2}};

int main()
{
    int cnt = 0;
    int c_min = 0;
    int r_min = 0;
    int c_max = COL;
    int r_max = ROW;

    while (1)
    {
        int c = c_min;
        int r = r_min;
        for (; c < c_max; ++c)
        {
            printf("%d ", arr[r][c]);
            ++cnt;
        }
        if(cnt == ROW * COL) {
            break;
        }
        printf("\n");
        ++r;
        --c;
        for (; r < r_max; ++r)
        {
            printf("%d ", arr[r][c]);
            ++cnt;
        }
        if(cnt == ROW * COL) {
            break;
        }
        printf("\n");
        --r;
        --c;
        for (; c >= c_min; --c)
        {
            printf("%d ", arr[r][c]);
            ++cnt;
        }
        if(cnt == ROW * COL) {
            break;
        }
        printf("\n");
        --r;
        ++r_min;
        ++c;
        for (; r >= r_min; --r)
        {
            printf("%d ", arr[r][c]);
            ++cnt;
        }
        if(cnt == ROW * COL) {
            break;
        }
        printf("\n");
        --r_max;
        ++c_min;
        --c_max;
    }

    printf("\ncnt is: [%d]\n", cnt);

    return 0;
}