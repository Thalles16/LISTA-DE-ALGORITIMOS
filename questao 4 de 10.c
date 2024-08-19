#include<stdio.h>


main () {
	
float numero1;
float numero2;

	printf("escreva um numero");
		scanf("%f",& numero1);

	printf("escreva um outro numero ");
		scanf("%f",& numero2);

	if(numero1>numero2){
	
		printf("o numero maior e %f", numero1);
	
	}
	else{
	
		printf("o numero maior e %f",numero2);
	} 

	
return 0;
}
