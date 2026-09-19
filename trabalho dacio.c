#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

int main() {

    /* Exercicio 1 - ordem inversa */
    {
        int primeiro, segundo;

        printf("Digite um numero inteiro: ");
        scanf("%d", &primeiro);

        printf("Agora digite outro numero inteiro: ");
        scanf("%d", &segundo);

        printf("Invertendo a ordem, fica: %d %d\n", segundo, primeiro);
    }

    /* Exercicio 2 - A * 10^n */
    {
        double valorA, resultado;
        int expoente;

        printf("Informe o coeficiente A: ");
        scanf("%lf", &valorA);

        if (valorA >= 1 && valorA < 10) {
            printf("Coeficiente aceito.\n");
        } else {
            printf("Coeficiente fora do intervalo [1, 10)!\n");
        }

        printf("Informe o expoente n: ");
        scanf("%d", &expoente);

        resultado = valorA * pow(10, expoente);

        printf("A x 10^n = %.0lf\n", resultado);
    }

    /* Exercicio 3 - decimal para binario */
    {
        int decimal, resto, b1, b2, b3, b4, b5, b6;

        printf("Digite um numero inteiro para converter: ");
        scanf("%d", &decimal);

        resto = decimal;

        b1 = resto % 2;
        resto = resto / 2;

        b2 = resto % 2;
        resto = resto / 2;

        b3 = resto % 2;
        resto = resto / 2;

        b4 = resto % 2;
        resto = resto / 2;

        b5 = resto % 2;
        resto = resto / 2;

        b6 = resto % 2;

        printf("Em base 2, esse numero fica: %d%d%d%d%d%d\n",
               b6, b5, b4, b3, b2, b1);
    }

    /* Exercicio 4 - salario com comissao */
    {
        double salario, vendas, comissao, total;

        printf("Quanto e o seu salario base? ");
        scanf("%lf", &salario);

        printf("Quanto voce vendeu no mes? ");
        scanf("%lf", &vendas);

        comissao = vendas * 0.15;
        total = salario + comissao;

        printf("Salario com comissao: R$ %.2lf\n", total);
    }

    /* Exercicio 5 - soma, media e produto */
    {
        float valor1, valor2, valor3, valor4;
        float soma, media, produto;

        printf("Primeiro valor: ");
        scanf("%f", &valor1);

        printf("Segundo valor: ");
        scanf("%f", &valor2);

        printf("Terceiro valor: ");
        scanf("%f", &valor3);

        printf("Quarto valor: ");
        scanf("%f", &valor4);

        soma = valor1 + valor2 + valor3 + valor4;

        media = soma / 4.0;

        produto = valor1 * valor2 * valor3 * valor4;

        printf("Soma: %.2f\n", soma);
        printf("Media: %.2f\n", media);
        printf("Produto: %.2f\n", produto);
    }

    /* Exercicio 6 - idade em dias */
    {
        int totalDias, idadeAnos, restoDias;
        int idadeMeses, diasFinais;

        printf("Quantos dias de vida voce tem? ");
        scanf("%d", &totalDias);

        idadeAnos = totalDias / 365;

        restoDias = totalDias % 365;

        idadeMeses = restoDias / 30;

        diasFinais = restoDias % 30;

        printf("Isso equivale a %d ano(s), %d mes(es) e %d dia(s)\n",
               idadeAnos, idadeMeses, diasFinais);
    }

    /* Exercicio 7 - volume da esfera */
    {
        float raio, volume;

        printf("Digite o raio da esfera: ");
        scanf("%f", &raio);

        volume = (4.0 / 3.0) * PI * pow(raio, 3);

        printf("Volume calculado: %.2f\n", volume);
    }

    /* Exercicio 8 - distancia entre dois pontos */
    {
        int xInicial, yInicial, xFinal, yFinal;
        float diferencaX, diferencaY, distancia;

        printf("Coordenadas do ponto 1 (x y): ");
        scanf("%d %d", &xInicial, &yInicial);

        printf("Coordenadas do ponto 2 (x y): ");
        scanf("%d %d", &xFinal, &yFinal);

        diferencaX = xFinal - xInicial;
        diferencaY = yFinal - yInicial;

        distancia = sqrt(pow(diferencaX, 2) + pow(diferencaY, 2));

        printf("Os pontos estao a %.2f unidades de distancia\n", distancia);
    }

    return 0;
}
```
