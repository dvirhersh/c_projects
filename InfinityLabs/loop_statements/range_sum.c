#include <stdio.h>

int RangeSum(int start, int end)
{
    int i, sum = 0;
    for (i = start + !(start % 2); i <= end; i += 2)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int start;
    int end;

    printf("Testing Report:\n");
    printf("Enter start:\n");
    scanf("%d", &start);
    printf("Enter end:\n");
    scanf("%d", &end);

    printf("Running test: RangeSum(%d, %d):\n %d\n", start, end, RangeSum(start, end));

    return 0;
}
