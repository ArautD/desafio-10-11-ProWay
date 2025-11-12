#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funcoes.h"

void boasVindas() {
    char nome[50];

    system("cls");
    printf("------------------------\n");
    printf("Digite seu nome para checkin no programa:\n");
    scanf("%s", nome);
    system("cls");
    printf("Seja bem-vindo(a), %s!\n", nome);
    pausa();
}

void pausa() {
    printf("\nPressione ENTER para continuar...");
    while(getchar() != '\n'); // limpa o buffer
    getchar(); // espera ENTER
}
 
void exibeTamanhoMensagem() { // Okay
    char palavra[50];

    printf("------------------------.\n");
    printf("Digite uma palavra que te retorno o tamanho dela: .\n");
    scanf("%s", palavra);
    //system("cls");

    printf("A palavra %s tem %zu caracteres.\n", palavra, strlen(palavra));

    pausa();
}

void exibeVogais(){ //Okay
    char palavra[50];
    int i, contador = 0;

    printf("------------------------.\n");
    printf("Digite uma palavra que te retorno a quantidade de vogais dela: .\n");
    scanf("%s", palavra);
    //system("cls");

    for(i = 0; palavra[i] != '\0'; i++) {
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
           palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
            contador++;
        }
    }

    printf("A palavra %s tem %d vogais.\n", palavra, contador);

    pausa();
}

void transformaMaiusculas(){ //
    char palavra[50];
    int i;

    printf("------------------------.\n");
    printf("Digite uma palavra que te retorno ela em maiusculas: .\n");
    scanf("%s", palavra);
    //system("cls");

    int tamanho = strlen(palavra);

    for(i = 0; i < tamanho; i++) {
        if(palavra[i] >= 'a' && palavra[i] <= 'z') {
            palavra[i] = toupper(palavra[i]);
        }
    }

    printf("A palavra em maiusculas: %s\n", palavra);

    pausa();
}

void inverteString(){
    char palavra[50];
    int i, j;
    char temp;
    

    printf("------------------------.\n");
    printf("Digite uma palavra que te retorno ela invertida: .\n");
    scanf("%s", palavra);
    //system("cls");

    int tamanho = strlen(palavra);

    for(i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp; 
    }
    printf("A palavra invertida: %s\n", palavra);

    pausa();
}

void concatenarPalavra(){
    char palavra1[50], palavra2[50];

    printf("------------------------.\n");
    printf("Digite a primeira palavra: .\n");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: .\n");
    scanf("%s", palavra2);
    //system("cls");

    strcat(palavra1, palavra2);
    printf("A palavra concatenada: %s\n", palavra1);

    pausa();
}

void comparaPalavra(){
    char palavra1[50], palavra2[50];

    printf("------------------------.\n");
    printf("Digite a primeira palavra: .\n");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: .\n");
    scanf("%s", palavra2);
    //system("cls");

    if(strcasecmp(palavra1, palavra2) == 0) { //strcasecmp para ignorar maiúsculas/minúsculas
        printf("As palavras são iguais.\n");
    } else {
        printf("As palavras são diferentes.\n");
    }

    pausa();

}

void substituiCaractere(){
    char palavra[50];
    char caractereAntigo, caractereNovo;
    int i;

    printf("------------------------.\n");
    printf("Digite uma palavra: .\n");
    scanf("%s", palavra);
    printf("Digite o caractere que deseja substituir: .\n");
    scanf(" %c", &caractereAntigo);
    printf("Digite o novo caractere: .\n");
    scanf(" %c", &caractereNovo);
    //system("cls");

    for(i = 0; palavra[i] != '\0'; i++) {
        if(palavra[i] == caractereAntigo) {
            palavra[i] = caractereNovo;
        }
    }

    printf("A palavra modificada: %s\n", palavra);

    pausa();
}


void contaPalavras(){
    char frase[200];
    int i, contador = 1;

    printf("------------------------.\n");
    printf("Digite uma frase: .\n");
    scanf(" %[^\n]s", frase);
    //system("cls");

    int tamanho = strlen(frase);

    for(i = 0; i < tamanho; i++) {
        if(frase[i] == ' ') {
            contador++;
        }
    }

    printf("A frase tem %d palavras.\n", contador);
    pausa();
}


void verificarPalindromo(){
    char palavra[50];
    int i, j;
    int contPalindromo = 1;

    printf("------------------------.\n");
    printf("Digite uma palavra: .\n");
    scanf("%s", palavra);
    //system("cls");

    int tamanho = strlen(palavra);

    for(i = 0, j = tamanho - 1; i < j; i++, j--){
        if(palavra[i] != palavra[j]) {
            contPalindromo = 0;
            break;
        }
    }
    if(contPalindromo){
        printf("A palavra %s é um palíndromo.\n", palavra);
    } else {
        printf("A palavra %s não é um palíndromo.\n", palavra);
    }

    pausa();
}


//Bônus

void removerEspaco(){
    char frase[200];
    char fraseSemEspaco[200];
    int i, j = 0;

    printf("------------------------.\n");
    printf("Digite uma frase: .\n");
    scanf(" %[^\n]s", frase);

    while (frase[i] == ' '){
        i++;
    }

    int ultimoEspaco = 0;
    for(i = 0; strlen(frase); i++) {
        if(frase[i] != ' ') {
            if(!ultimoEspaco) {
                fraseSemEspaco[j++] = ' ';
                ultimoEspaco = 1;
            }
            fraseSemEspaco[j] = frase[i];
            j++;
        } else {
            fraseSemEspaco[j++] = frase[i];
            ultimoEspaco = 0;
        }
    }

    if(j > 0 && fraseSemEspaco[j - 1] == ' ') {
        j--;
    }

    fraseSemEspaco[j] = '\0';

    printf("A frase sem espaços: %s\n", fraseSemEspaco);

    pausa();
}

void contFreqAlfabeto(){
    //contar a frequência de cada letra do alfabeto em uma frase
    char frase[200];
    int freq[26] = {0};
    int i;

    printf("------------------------.\n");
    printf("Digite uma frase: .\n");
    scanf(" %[^\n]s", frase);

    for(i = 0; frase[i] != '\0'; i++) {
        char ch = tolower(frase[i]);
        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    printf("Frequência das letras do alfabeto:\n");
    for(i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            printf("--------------------------------\n");
            printf("%c: %d\n", 'a' + i, freq[i]);
        }
    }
    pausa();
}