#include <stdio.h>
#include <assert.h>

float AddVat(float price, int category)
{
    switch (category)
    {
    case 1:
    case 2:
    case 3:
        price *= 1.2;
        break;
    case 4:
        price *= 1.15;
        break;
    case 5:
        price *= 1.08;
        break;
    case 6:
        break;
    default:
        assert(0 && "Unknown category!");
    }

    return price;
}

int main()
{
    float price;
    int category;

    printf("Testing Report:\n");
    printf("Enter price:\n");
    scanf("%f", &price);
    printf("Enter category:\n");
    scanf("%d", &category);

    printf("Running test: AddVat(%0f, %d):\n %f\n", price, category, AddVat(price, category));

    return 0;
}
