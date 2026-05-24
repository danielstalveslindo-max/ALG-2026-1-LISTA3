#include <stdio.h>

int main() {
    int numeros[10];
    int pares = 0, impares = 0;
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("\nQuantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}
