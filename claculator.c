#include <stdio.h>
#include <stdlib.h>

int main () {

	double n1,n2;
	char operation;
	
	while (1) {
		printf("press x to exit:\n"
		       "Enter the operator(+,-,*,/):");
 		scanf(" %c", &operation);
		
		if (operation == 'x') {
			exit(0);
		}

 		printf("Enter the two inputs:\n");
 		scanf("%lf %lf", &n1, &n2);


		switch (operation) {
			case '+':
            			printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1 + n2);
            			break;
 
        		case '-':
            			printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1 - n2);
            			break;
 
        		case '*':
            			printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1 * n2);
            			break;
 
        		case '/':
            			printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1 / n2);
            			break;
			default:
           			 printf("Error! please write a valid operator\n");
       			 
		}
	}

	return 0;
}
