struct Person
{
    unsigned id_num;
    char name[32];
    char address[128];
    unsigned tel_num;
};

int IsLess(const struct Person *a, const struct Person *b)
{
    if (a->id_num < b->id_num)
    {
        return 1;
    }
    return 0;
}

int main()
{

    struct Point p1 = {5, 10};
    struct Point p2 = {25, -5};

    printf("\nTesting Report:\n");

    printf("Distane = %f\n", IsLess(p1, p2));

    return 0;
}
