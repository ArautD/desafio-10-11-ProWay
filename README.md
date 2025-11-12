Projeto de Manipulação de Strings em C
======================================

Descrição
---------
Este projeto tem como objetivo oferecer um conjunto de funcionalidades para manipulação de strings em linguagem C, com foco em aprendizado e prática de programação estruturada. O programa apresenta um menu interativo que permite ao usuário realizar diversas operações com palavras e frases.

Funcionalidades
---------------
1. Exibir tamanho da palavra
2. Contar vogais
3. Transformar em maiúsculas
4. Inverter palavra
5. Concatenar palavras
6. Comparar palavras
7. Substituir caractere
8. Contar palavras em frase
9. Verificar palíndromo
10. Remover espaços
11. Contar frequência de letras do alfabeto

Estrutura do Projeto
--------------------
- main.c         → Função principal e menu interativo
- funcoes.c      → Implementações das funcionalidades
- funcoes.h      → Declarações das funções utilizadas
- output/        → Diretório onde o executável é gerado
- Documentacao_Projeto_Manipulacao_Strings.txt → Este arquivo de documentação

Instruções de Compilação e Execução
-----------------------------------
1. Certifique-se de ter o compilador GCC instalado (ex: MinGW no Windows).
2. Compile o projeto com o seguinte comando:

   gcc main.c funcoes.c -o output/main.exe

3. Execute o programa:

   ./output/main.exe   (Linux/Mac)
   output\main.exe    (Windows)

Exemplo de Uso
--------------
Ao executar o programa, o usuário verá o seguinte menu:

===== MENU =====
1 - Exibir tamanho da palavra
2 - Contar vogais
...
0 - Sair

Exemplo:
Digite uma palavra: programação
Saída: A palavra programação tem 11 caracteres.

