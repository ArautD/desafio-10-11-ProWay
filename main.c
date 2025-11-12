#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"


int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("chcp 65001 > nul");

    int opcao;
 
    boasVindas();

    do {
    system("cls");
    printf("\n===== MENU =====\n");
    printf("1 - Exibir tamanho da palavra\n");
    printf("2 - Contar vogais\n");
    printf("3 - Transformar em maiúsculas\n");
    printf("4 - Inverter palavra\n");
    printf("5 - Concatenar palavras\n");
    printf("6 - Comparar palavras\n");
    printf("7 - Substituir caractere\n");
    printf("8 - Contar palavras em frase\n");
    printf("9 - Verificar palíndromo\n");
    printf("10 - Remover espaços\n");
    printf("11 - Contar frequência de letras do alfabeto\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada inválida! Digite um número.\n");
        opcao = -1; // força repetir
        pausa();
    }

    while(getchar() != '\n'); // limpa buffer após leitura válida
    system("cls");

    switch(opcao) {
        case 1: exibeTamanhoMensagem(); break;
        case 2: exibeVogais(); break;
        case 3: transformaMaiusculas(); break;
        case 4: inverteString(); break;
        case 5: concatenarPalavra(); break;
        case 6: comparaPalavra(); break;
        case 7: substituiCaractere(); break;
        case 8: contaPalavras(); break;
        case 9: verificarPalindromo(); break;
        case 10: removerEspaco(); break;
        case 11: contFreqAlfabeto(); break;
        case 0: printf("Saindo...\n"); break;
        default: printf("Opção inválida!\n");
    }
} while(opcao != 0);


    return 0;
}
