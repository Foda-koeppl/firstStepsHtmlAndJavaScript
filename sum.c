#include <stdio.h>

int sum(int s, int e);

int main() {

	int i, start, end;//ganze Zahlen
	//input first number
	printf("A number please: ");
	scanf("%d", &start);
	//input second number
	printf("Another number please (a bit higher than before: ");
	scanf("%d", &end);
	printf("\n");
	
	if (end < start)
	{
		printf(" Eh oida, wast du net, dass ");
		printf("%d klana ois des %d is? Hob I di droht?\n", end, start);
		return -1;
		}
	else
	{
		printf("The sun between %d and %d is: %d\n", start, end, sum(start, end));
		return 0;
	}
	printf("Seit wann ist da Spar Gourmet Deppad?");
}

int sum(int s, int e)
{
	int i, sum = 0;
	for (i = s; i <= e; i = i + 1)
	{
		sum = sum + i;
	}
	return sum;
}
