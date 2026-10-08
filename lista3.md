Questão 01
Resposta
a)

A diferença principal é quando a condição é verificada:

while: verifica a condição antes de executar o bloco. Pode executar zero vezes.
do-while: executa o bloco primeiro e verifica a condição depois. Executa pelo menos uma vez.
b)
for: mais adequado quando sabemos ou conseguimos controlar facilmente a quantidade de repetições, como percorrer um vetor ou contar de 1 até 10.
while: adequado quando não sabemos exatamente quantas vezes o código será executado e a repetição depende de uma condição.
do-while: adequado quando o bloco precisa ser executado pelo menos uma vez, como em menus ou validação de entrada.
c)

while (condicao); não é erro de compilação. O ponto e vírgula representa um comando vazio.

Se condicao for verdadeira, o while ficará repetindo o comando vazio continuamente:

while (condicao);

Como não existe nenhum código dentro do laço para alterar condicao, ela pode permanecer verdadeira e causar um loop infinito.

Exemplo:

int x = 1;

while (x == 1);

printf("Fim");

Nesse caso, o programa fica preso no while e nunca chega ao printf, porque x continua sendo 1.

Questão 02
Resposta
a)

O erro acontece porque a variável soma foi declarada dentro do bloco do for. Portanto, ela só existe e pode ser acessada dentro desse bloco.

Quando o printf tenta usar soma fora do for, o compilador não encontra essa variável.

b)

Mesmo colocando o printf dentro do for, o resultado estaria errado porque soma é criada novamente a cada repetição:

int soma = 0;

Assim, a cada volta do laço ela volta a valer 0. O programa não conseguiria acumular os valores anteriores.

c)

Código corrigido:

#include <stdio.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    return 0;
}

O resultado será:

Soma final = 285

Visibilidade: indica onde uma variável pode ser acessada no código.

Escopo de bloco: uma variável declarada dentro de { } só pode ser utilizada dentro daquele bloco. No código original, soma estava dentro do for.

Tempo de vida: indica por quanto tempo a variável existe durante a execução. No código corrigido, soma é criada antes do for e permanece disponível durante todo o main, permitindo acumular os valores das iterações.

Questão 03
Resposta
a)

No Trecho A:

for (a = 36; a > 0; a /= 2)
    printf("%d\t", a);

A sequência impressa será:

36    18    9    4    2    1

Isso acontece porque a /= 2 faz uma divisão inteira por 2 a cada repetição.

b)

O Trecho B lê caracteres até que o usuário digite X:

for (; (ch = getch()) != 'X';)
    printf("%c", ch + 1);

A expressão ch + 1 pega o código ASCII do caractere e adiciona 1. Por exemplo, se ch for 'A', o resultado será 'B'.

Os parênteses são necessários porque primeiro precisamos fazer a atribuição:

ch = getch()

e depois comparar o valor recebido com 'X':

(ch = getch()) != 'X'

Sem os parênteses, a precedência dos operadores faria a comparação acontecer antes da atribuição, alterando o resultado da expressão.

c)

O laço:

for (;;)
    printf("Laço Infinito\n");

não possui condição de parada, então continuará executando.

Para interrompê-lo programaticamente, podemos utilizar break dentro de uma condição:

for (;;) {
    printf("Laço Infinito\n");

    if (condicao)
        break;
}

Quando a condição for verdadeira, o break encerra o laço normalmente.

Questão 04
Resposta
a)

Quando o break é executado dentro de um for ou while, ele encerra imediatamente o laço atual e a execução continua na primeira instrução depois do laço.

b)

O continue pula o restante do código da iteração atual e inicia a próxima iteração.

No caso do for, após o continue, a expressão de incremento é executada imediatamente. Depois disso, a condição do laço é verificada novamente.

Exemplo:

for (int i = 0; i < 10; i++) {
    if (i == 5)
        continue;

    printf("%d\n", i);
}

Quando i chega a 5, o printf é ignorado, o i++ é executado e o laço continua.

c)

Em laços aninhados, o break interrompe somente o laço mais interno onde ele está.

Exemplo:

for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        if (j == 2)
            break;
    }
}

Nesse caso, o break encerra apenas o for de j. O for de i continua normalmente.

Questão 05
Resposta
a)

O laço executará 5 iterações.

Os valores começam com i = 0 e j = 10. A cada repetição, i aumenta 1 e j diminui 1.

b)

A saída exata será:

i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

Depois da quinta iteração, i = 5 e j = 5. Como i < j é falso, o laço termina.

c)

Utilizando while:

#include <stdio.h>

int main() {
    int i = 0, j = 10;

    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);

        i++;
        j--;
    }

    return 0;
}

O i++ e o j-- ficam no final do bloco, reproduzindo o incremento e decremento do for.

Questão 06
Resposta
a)

O valor final de x será:

6
b)

O operador x++ é pós-fixado: primeiro compara o valor atual e depois incrementa x.

Comparação	Valor usado	Depois do ++	Resultado
0 < 5	0	1	verdadeiro
1 < 5	1	2	verdadeiro
2 < 5	2	3	verdadeiro
3 < 5	3	4	verdadeiro
4 < 5	4	5	verdadeiro
5 < 5	5	6	falso

Quando a comparação 5 < 5 é falsa, o while termina. Portanto, x fica com valor 6.

c)

Uma forma explícita, sem corpo vazio, mantendo o mesmo resultado:

#include <stdio.h>

int main() {
    int x = 0;

    while (x < 5) {
        x++;
    }

    x++;

    printf("Valor final de x = %d\n", x);

    return 0;
}

O último x++ representa o incremento que acontece na última comparação falsa do código original.

