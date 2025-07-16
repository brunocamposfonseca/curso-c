#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcHipotenusa(float a, float o, float *h);
float calcAdjcente(float h, float o, float *a);
float calcOposto(float h, float a, float *o);
float calcAreaTriang(float a, float o, float *area);

int main() {
    float a, o, h, area;
    char opt, stt;

    while (1) {
        system("cls");
        printf("Qual lado voce gostaria de descobrir?\n[h - hipotenusa | a - cateto adjacente | o - cateto oposto | t - area do triangulo]: ");
        scanf("%s", &opt);

        switch (opt) {
            case 'h':
                printf("\nDigite o valor do cateto adjacente: ");
                scanf("%f", &a);
                printf("Digite o valor do cateto oposto: ");
                scanf("%f", &o);

                if (a == 0 || o == 0) { printf("O valor de um cateto nao pode ser 0. Tente novamente..."); break;}
                calcHipotenusa(a, o, &h);
                printf("A hipotenusa do triangulo e: %.2f\n", h);
                break;
            case 'a':
                printf("\nDigite o valor da hipotenusa: ");
                scanf("%f", &h);
                printf("Digite o valor do cateto oposto: ");
                scanf("%f", &o);
                if (a == 0 || o == 0) { printf("O valor de um cateto nao pode ser 0. Tente novamente..."); break;}
                calcAdjcente(h, o, &a);
                printf("O cateto adjacente do triangulo e: %.2f\n", a);
                break;
            case 'o':
                printf("\nDigite o valor da hipotenusa: ");
                scanf("%f", &h);
                printf("Digite o valor do cateto adjacente: ");
                scanf("%f", &a);
                if (a == 0 || o == 0) { printf("O valor de um cateto nao pode ser 0. Tente novamente..."); break;}
                calcOposto(h, a, &o);
                printf("O cateto adjacente do triangulo e: %.2f\n", o);
                break;
            case 't':
                printf("\nDigite o valor do cateto adjacente: ");
                scanf("%f", &a);
                printf("Digite o valor do cateto oposto: ");
                scanf("%f", &o);
                if (a == 0 || o == 0) { printf("O valor de um cateto nao pode ser 0. Tente novamente..."); break;}
                calcAreaTriang(a, o, &area);
                printf("A area do triangulo e: %.2f\n", area);
                break;
            default:
                printf("Infelizmente o caractere que você escolheu nao existe. Tente novamente...");
                return 0;
                break;
        }

        printf("\nVoce deseja continuar?: ");
        scanf("%s", &stt);

        if (stt == 'n' || stt == 'N'){
            return 0;
        }

    }

    system("pause");
    return 0;
}

float calcHipotenusa(float a, float o, float *h) {
    *h = sqrt( pow(a, 2) + pow(o, 2));
}

float calcAdjcente(float h, float o, float *a){
    if (h > o) {
        *a = sqrt( pow(h, 2) - pow(o, 2));
    } else {
        *a = sqrt( pow(o, 2) - pow(h, 2));
    }

}
float calcOposto(float h, float a, float *o){
    if (h > a) {
        *o = sqrt( pow(h, 2) - pow(a, 2));
    } else {
        *o = sqrt( pow(a, 2) - pow(h, 2));
    }
}

float calcAreaTriang(float a, float o, float *area){
    *area = (a * o) / 2;
}
