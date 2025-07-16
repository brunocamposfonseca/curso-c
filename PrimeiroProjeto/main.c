#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main()
{
    int num1, num2;
    char operador;
    int res;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe a operação: ");
    scanf(" %c", &operador);  // espaço antes do %c

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    switch (operador) {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    default:
        printf("Essa operação não foi incluída ou não existe...\n");
        return 1;  // Encerra o programa com erro
    }

    printf("Resultado: %d\n", res);
    system("pause");
    return 0;
}*/

/*
float porcPresenca(float freq);
float calcMedia(float n1, float n2, float n3,float n4);
char* verStatus(float media, float pres);

int main() {
    float n1, n2, n3, n4, freq, media, pres;
    char nome[100], status[20];

    printf("<========== CRIAÇÃO DE BOLETIM ==========>\n");
    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    printf("\nNúmero de faltas do aluno: ");
    scanf("%f", &freq);
    printf("\nNota do 1º semestre: ");
    scanf("%f", &n1);
    printf("\nNota do 2º semestre: ");
    scanf("%f", &n2);
    printf("\nNota do 3º semestre: ");
    scanf("%f", &n3);
    printf("\nNota do 4º semestre: ");
    scanf("%f", &n4);
    printf("\n<========================================>\n");

    pres = porcPresenca(freq);
    media = calcMedia(n1, n2, n3, n4);
    char* status_return = verStatus(media, pres);
    strcpy(status, status_return);

    system("cls");

    printf("Aluno: %s", nome);
    printf("\nCurso: Desenvolvimento de Sistemas");
    printf("\nEscola: SESI - SENAI");
    printf("\n===============================================================================");
    printf("\nMatéria: Lógica e Algoritmo de Programação  Ano: 2025");
    printf("\n===============================================================================");
    printf("\nNota 1: %.1f || Nota 2: %.1f || Nota 3: %.1f || Nota 4: %.1f || Média: %.2f || Frequência; %.1f%%", n1, n2, n3, n4, media, freq);
    printf("\n===============================================================================");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\nStatus: %s!", status);
    printf("\n");
    printf("\n==========================================================================");


    system("pause");
    return 0;
}

float porcPresenca(float freq) {
    return (100 - ((freq * 100) / 200));
}

float calcMedia(float n1, float n2, float n3, float n4) {
    return (n1 + n2 + n3 + n4) / 4;
}

char* verStatus(float media, float pres){
    if (media >= 7.0 && pres >= 75.0){
        return "Aprovado";
    } else if (media >= 5.0 && pres >= 75.0) {
        return "Recuperacao";
    } else {
        return "Reprovado";
    }
}
*/
