#include <stdlib.h>
#include <stdio.h>

void allocate_memory()
{
	int i = 0;
	int *data = (int *)malloc(sizeof(int) * 10);
	while (*data)
	{
		i++;
		data++;
	}
	free(data);
	data = NULL;

	i = 0;
	i = 1 / 0;
	while (1)
	{
		printf("%d\n", i++);
	}
}

int main()
{
	allocate_memory();
	return 0;
}
