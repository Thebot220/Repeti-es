#include <stdio.h>

int main(){
    int i, n;


    do {
    printf("Inoforme um valor: ");
    scanf("%i", &n);

    if (n<1 || n>10) {
        printf("Valor não suportado, tente novamente.\n");
    }
    } while (n<1 || n>10);

    for (i=1; i<=10; i++) {
        printf("%i X %i = %i\n", n, i, n*i);
    }

}