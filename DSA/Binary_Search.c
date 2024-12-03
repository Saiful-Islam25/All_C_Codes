#include <stdio.h> 

int DATA[10] = {10, 17, 23, 31, 39, 57, 64, 79, 88, 99};
int N = 10, LB = 0, UB = 9;
int BINARY(int);

void main()
{
	int i, ITEM, LOC;
	printf("Values contained in DATA[10] = ");
	for (i = 0; i < 10; i++)
		printf(" %d ", DATA[i]);

	printf("\n\nEnter the ITEM to be searched = ");
	scanf(" %d", &ITEM);

	LOC = BINARY(ITEM);

	if (LOC == -1)
		printf("\n\nITEM is not present in DATA[10]");
	else
		printf("\n\nThe location of ITEM in DATA[10] is = %d", LOC);

	return 0;
}
int BINARY(int I)
{
	int L, BEG, MID, END;
	BEG = LB;
	END = UB;
	MID = (BEG + END) / 2;

	while (BEG <= END && DATA[MID] != I)
	{
		if (I < DATA[MID])
			END = MID - 1;
		else
			BEG = MID + 1;
			
		MID = (BEG + END) / 2;
	}
	if (DATA[MID] == I)
		L = MID;
	else
		L = -1;
	return (L);
}
