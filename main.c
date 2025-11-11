#include <stdio.h>
#include <stdlib.h>

void boasVindas() {
    char nome[50];

    printf("Digite seu nome para checkin no programa:\n");
    scanf("%s", &nome);
    system("cls");
    printf("------------------------\n");
    printf("Seja bem vindo, %s!\n", nome);
}

int main() {
    boasVindas();
    return 0;
}