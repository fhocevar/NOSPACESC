# C Coding Challenge: String Split Problem

Este repositório contém a solução para um problema de programação em C, onde o objetivo é dividir uma string numérica em partes válidas de acordo com algumas restrições. As partes devem representar números menores ou iguais a um valor específico, sem zeros à esquerda (exceto o próprio "0"). O número total de maneiras válidas de dividir a string deve ser retornado, e o resultado deve ser dado módulo K.

## Descrição do Problema

Você é dado uma string de números (com caracteres de '0' a '9') e três parâmetros: `N` (comprimento da string), `C` (valor máximo permitido para os números formados pelas divisões), e `K` (módulo). O objetivo é encontrar todas as maneiras de dividir a string em substrings válidas que atendam às seguintes condições:

1. Cada número formado pelas sub-strings não deve ser maior que `C`.
2. Não pode haver números com zero à esquerda, exceto "0".
3. O número de maneiras de fazer a divisão válida deve ser retornado **módulo K**.

## Solução

A solução usa uma abordagem de **programação dinâmica** (DP) para contar as maneiras válidas de dividir a string. A ideia é calcular a quantidade de maneiras de particionar a string até cada posição, levando em consideração as restrições dadas.

## Estrutura do Código

- **Função `Count()`**:
  - Recebe os parâmetros `N`, `C`, `K` e a string `S`.
  - Utiliza programação dinâmica para calcular o número de maneiras de dividir a string `S`.
  - Retorna o número de maneiras válidas, modificado pelo valor de `K`.

- **Função `main()`**:
  - Lê os parâmetros de entrada (tamanho da string `N`, valor máximo `C`, módulo `K`).
  - Lê a string `S`.
  - Chama a função `Count()` e imprime o resultado.

## Como Rodar o Código

### Requisitos

- Compilador de C (como GCC ou Clang).

### Passos para Executar

1. Clone o repositório para sua máquina local:

    ```bash
    git clone https://github.com/seu-usuario/nome-do-repositorio.git
    ```

2. Entre no diretório do repositório:

    ```bash
    cd nome-do-repositorio
    ```

3. Compile o código com o compilador C de sua escolha. Por exemplo, com o GCC:

    ```bash
    gcc -o split_problem split_problem.c
    ```

4. Execute o programa:

    ```bash
    ./split_problem
    ```

5. Forneça a entrada no formato esperado. Exemplo:

    ```
    7 1234567 9
    1234567
    ```

    A saída será o número de maneiras válidas de dividir a string.

## Exemplo de Entrada e Saída

### Entrada:

