#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// protótipos
int ehPrimo(int n);
void listarGemeos(int a, int b);


void listarGemeos(int a, int b) {

    for (int i = a; i <= b; i++) {
//        if ( (ehPrimo(i) == 1) && (ehPrimo(i+2)==1)) {
        if ( ehPrimo(i) && ehPrimo(i+2)) {
            printf("--> %d e %d\n",i, i+2);
        }
    }
}

int ehPrimo(int n) {
    for(int i = 2; i < n; i++) {
        if ( n % i == 0 )
            return 0;
    }
    return 1;
}


int main() {

    // verifica se um número é primo
    int num;
    printf("Informe um valor > 1:");
    scanf("%d", &num);
    printf("ehPrimo(%d): %d\n", num, ehPrimo(num));

    // escrever os números primos gêmeos em um intervalo fornecido pelo usuário
    // dois números primos são gêmeos se a diferença entre eles for 2
    int inicio, fim;
    printf("\nPrimos Gemeos - informe o intervalo desejado: ");
    scanf("%d %d", &inicio, &fim);

    listarGemeos(inicio, fim);


    return 0;
}
