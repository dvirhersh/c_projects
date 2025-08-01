#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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
    int num_of_years = 10;
    int end;

    printf("Testing Report:\n");
    printf("Enter num_of_years:\n");
    // scanf("%d", &num_of_years);

    printf("Running test: RainfallAverage(%d):\n %d\n", num_of_years, RainfallAverage(num_of_years));

    return 0;
}
