#include <stdio.h>

int DATA[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
int N = 10;

int LINEAR(int);

void main()
{
	int i, ITEM, LOC;
	printf("Values contain in DATA[10] = ");
	for (i = 0; i < 10; i++)
		printf(" %d ", DATA[i]);

	printf("\n\nEnter the ITEM to be searched = ");
	scanf("%d", &ITEM);

	LOC = LINEAR(ITEM);

	if (LOC == -1)
	{
		printf("\n\nITEM is not present in DATA[10]");
	}
	else
	{
		printf("\n\nThe location of ITEM in DATA[10] is = %d", LOC);
	}

	return 0;
}

int LINEAR(int I)
{
	int L = 0;
	DATA[N] = I;
	// L=0;

	while (DATA[L] != I)
		L = L + 1;
	if (L == N)
		L = -1;

	return (L);
}
