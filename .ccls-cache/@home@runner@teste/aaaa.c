#include <stdio.h>

int somaDigitos(int n) {
    if (n < 10) {
        return n;
    }
    
    return (n % 10) + somaDigitos(n / 10);
}

int aaaa() {
    int numero;

    printf("Digite um número para calcular a soma de seus dígitos: ");
    scanf("%d", &numero);
    
    int resultado = somaDigitos(numero);
    printf("A soma dos dígitos de %d é: %d\n", numero, resultado);

    return 0;
}

