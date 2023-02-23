#include <stdio.h>

void main()
{
	int s[20][4], t;
	int r, c, p, i, j;
	printf("Enter the number of row");
	scanf("%d", &r);
	s[0][0] = r;
	printf("Enter the number of column");
	scanf("%d", &c);
	s[0][1] = c;
	printf("Enter the non zero element");
	scanf("%d", &p);
	s[0][2] = p;
	// Entering specification of non zero element.
	for (i = 1; i <= p; i++)
	{
		printf("Enter the row specification");
		scanf("%d", &s[i][0]);
		printf("Enter the column specification");
		scanf("%d", &s[i][1]);
		printf("Enter the non-zero specification");
		scanf("%d", &s[i][2]);
	}

	// printing the sparse matriix .
	printf("the sparse matrix are\n ");
	for (i = 0; i <= p; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", s[i][j]);
		}
		printf("\n");
	}
	for (i = 1; i <= p; i++)
	{
		t = s[i][0];
		s[i][0] = s[i][1];
		s[i][1] = t;
	}
	printf("\nThe transpose of sparse matrix are\n");
	for (i = 0; i <= p; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", s[i][j]);
		}
		printf("\n");
	}
}