#include <stdio.h>

int main () {

	int n1,n2;
	char operation;

	printf("Enter the operator(+,-,*,/):");
 	scanf("%c", &operation);

 	printf("Enter the two inputs:\n");
 	scanf("%d%d", &n1, &n2);

	switch (operation) {
	
		case '+':
			printf("Addition of %d and %d is %d\n", n1, n2, n1 + n2);
    			break;		
		default:
            		printf("Error! operator is not correct\n");	
	}
 
	return 0;
}
