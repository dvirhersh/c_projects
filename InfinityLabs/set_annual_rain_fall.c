#include <stdlib.h> /* rand */
#include <math.h>   /* pow */

int annual_rainfalls[100];

void SetAnnualRainfall(int year, int rainfall_in_mm)
{
#define FIRST_YEAR 1970

    annual_rainfalls[year - FIRST_YEAR] = rainfall_in_mm;
}

int RainfallAverage(int num_years)
{
    int i, sum = 0;

    for (i = 0; i < num_years; i++)
    {
        sum += annual_rainfalls[i];
    }
    return sum / num_years;
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
