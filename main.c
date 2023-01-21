#include <stdio.h>
#include <math.h>

int delta(int A,int  B,int C){
    int resultado = pow(B, 2) - 4 * A * C;
    resultado = sqrt(resultado);

    return resultado;
}

int main(){
    int A, B, C;
    int valorDelta;
    int s1,s2;

    printf("Digite o Valor de A: ");
    scanf("%d", &A);

    printf("Digite o Valor de B: ");
    scanf("%d", &B);

    printf("Digite o Valor de C: ");
    scanf("%d", &C);

    A == 0 || B == 0 || C == 0 ? main() : printf("\n");

    valorDelta = delta(A, B, C);

    s1 = (-B + valorDelta) / (2 * A);
    s2 = (-B - valorDelta) / (2 * A);

    printf("Seu Primeiro Resultado foi %d e o segundo %d \n", s1, s2);

    return 0;
}