#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

static int* CreateCircleOfSuiciadls(int num);
static int KillNext(int *arr, int cur, int *killed);

int JosephusProblem(int num)
{
    int killed = 0;
    int i = 0;
    int *arr = CreateCircleOfSuiciadls(num);

    while (killed < num - 1)
        i = KillNext(arr, i, &killed);

    free(arr);
    return i;
}

static int KillNext(int *arr, int cur, int *killed)
{
    int is_going_to_be_killed = arr[arr[cur]];
    arr[arr[cur]] = 0;
    (*killed)++;
    arr[cur] = is_going_to_be_killed;
    return is_going_to_be_killed;
}
static int* CreateCircleOfSuiciadls(int num)
{
    int *arr = (int *)malloc(num * sizeof(int));
    int i = 0;
    assert(arr);
    for (i = 0; i < num; i++)
        arr[i] = (i + 1) % num;
    return arr;
}
