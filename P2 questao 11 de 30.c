#include <stdio.h>

// Função para verificar se um número é primo
int isPrime(int num) {
    // Números menores ou iguais a 1 não são primos
    if (num <= 1) {
        return 0; // Não é primo
    }
    // 2 e 3 são primos
    if (num == 2 || num == 3) {
        return 1; // É primo
    }
    // Elimina múltiplos de 2 e 3
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; // Não é primo
    }
    // Verifica divisores de 5 até num-1
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0; // Não é primo
        }
    }
    return 1; // É primo
}

int main() {
    int number;

    // Solicita o número ao usuário
    printf("Digite um número: ");
    scanf("%d", &number);

    // Verifica se o número é primo e exibe o resultado
    if (isPrime(number)) {
        printf("%d é um número primo.\n", number);
    } else {
        printf("%d não é um número primo.\n", number);
    }

    return 0;
}
