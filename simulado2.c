#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4;
	
	printf("Insira o n1:");
	scanf("%d", &n1);
	
	printf("Insira o n2:");
	scanf("%d", &n2);
	
	printf("Insira o n3:");
	scanf("%d", &n3);
	
	printf("Insira o n4:");
	scanf("%d", &n4);
	
	printf("A sequnencia inicial e:\n ");
	printf("%d %d %d %d", n1, n2, n3, n4);
	
	
	printf("\nA permutacao e:\n ");
	printf("%d %d %d %d", n2, n4, n1, n3);
	
	return 0;
}
