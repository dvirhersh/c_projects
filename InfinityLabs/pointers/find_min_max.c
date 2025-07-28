#include <stdio.h>
#include <stdlib.h>

void FindMinMax(const int array[], int size, int *min, int *max)
{
    int minVal = array[0];
    int maxVal = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] < minVal)
        {
            minVal = array[i];
        }
        else if (array[i] > maxVal)
        {
            maxVal = array[i];
        }
    }

    *min = minVal;
    *max = maxVal;
}

int main()
{
    const int size = 102;
    int grades[size];
    int min, max;

    for (int i = 0; i < size; i++)
    {
        grades[i] = rand() % 100;
        printf("grades[%3d] = %2d\n", i, grades[i]);
    }

    printf("\nTesting Report:\n");

    FindMinMax(grades, size, &min, &max);
    printf("Minimum grade = %d\n", min);
    printf("Maximum grade = %d\n", max);

    return 0;
}
