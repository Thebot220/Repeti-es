#include <stdio.h>

int main(){
    int n, i;

    printf("Informe um número inteiro: ");
    scanf("%i", &n);

    printf("A sequência de números de 0 a %i é:\n", n);

    for (i=0; i<=n; i++) {
        printf("%i, ", i);
    }
}