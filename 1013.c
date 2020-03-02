#include<stdio.h>
#include <math.h>

int main()
{
	int A, B, C;
	int maiorAB,maiorAC,maiorBC;

	scanf("%d %d %d", &A, &B, &C);
	maiorAB = (A + B + abs(A - B)) / 2;
	maiorAC = (maiorAB + C + abs(maiorAB - C)) / 2;


	printf("%d eh o maior\n", maiorAC);
	return 0;
}
