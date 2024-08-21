#include <stdio.h>

int main(){
	
	float numero1;
	float numero2;
	
	
	printf("escreva um numero");
		
		scanf("%f", &numero1);

	printf("escreva um outro numero");
		
		scanf("%f", &numero2);

float soma = numero1+numero2;

if(soma <0)
 {
	printf("um dos numeros escolhido e invalido");
	
	
}
else{
	
	printf("a soma dos valores e %.2f",soma);
}


}
