#include <stdio.h>

int main(){
    int i, n, c;

    for (i=1; i<=10; i++) {
        printf("Insira o %iº valor: ", i);
        scanf("%i", &n);

        if (n<0) {
            c++;
        }
    }
    printf("Foram inseridos %i valores negativos.", c);
}