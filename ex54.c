#include <stdio.h>

int main(){
    int n, i;

    do {
    printf("Informe um número inteiro: ");
    scanf("%i", &n);

    if (n<0) {
        printf("Valor não suportado, tente novamente.\n");
    }
    } while (n<0);

    printf("A sequência de números de 0 a %i é:\n", n);

    for (i=0; i<=n; i++) {
        printf("%i, ", i);
    }
}