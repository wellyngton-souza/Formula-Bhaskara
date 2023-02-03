#include <stdio.h>
#include <math.h>

float delta(int A,int  B,int C){
    double resultado = pow(B, 2) - 4 * A * C;
    resultado = sqrt(resultado);

    return resultado;
}

int main(){
    int A, B, C;
    double valorDelta;
    double s1,s2;

    printf("--------------------------\n");
    printf("---Calculadora Bhaskara---\n");
    printf("--------------------------\n");

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

    if(s1 < 100 && s1 > -100 && s2 < 100 && s2 > -100){
        printf("Seu Primeiro Resultado foi %f e o segundo %f \n", s1, s2);
    } else{
        printf("A equação de 2º grau não possui raízes reais!\n");
    }   

    return 0;
}