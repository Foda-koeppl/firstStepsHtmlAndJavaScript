#include <stdio.h>


int main(){
	
	int i, end;//ganze Zahlen
	printf("A number please: ");
		scanf("%d", &end);
	printf("\n");
		for( i=0; i<=end; i=i+1 )
	//initialisierung, bevor die Schleife beginnt;
	//Bedingung, Schleife wird bei wahr ausgeführt;
	//Anweisung, am Ende jeder Schleife	
{
	printf("%d\n", i);
}
	printf("Hello World");
	return 0;
}
