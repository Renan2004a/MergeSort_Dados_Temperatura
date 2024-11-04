#include <stdio.h>

int somaDigitos(int n) {
    // Caso base: se n é menor que 10, retorna n
    if (n < 10) {
        return n;
    }
    // Chamada recursiva: soma o último dígito com a soma dos dígitos restantes
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero;

    // Solicita ao usuário que digite um número
    printf("Digite um número para calcular a soma de seus dígitos: ");
    scanf("%d", &numero);

    // Chama a função e exibe o resultado
    int resultado = somaDigitos(numero);
    printf("A soma dos dígitos de %d é: %d\n", numero, resultado);

    return 0;
}

