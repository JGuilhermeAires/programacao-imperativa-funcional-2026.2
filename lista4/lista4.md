Questão 01 — Avaliação de Expressões Condicionais e Atribuição vs. Igualdade
a) Ao utilizar if (x = 0), ocorre uma atribuição, ou seja, a variável x recebe o valor zero. Como em C o valor zero representa falso, o bloco de código associado ao if não será executado. Já if (x == 0) realiza uma comparação, verificando se x é igual a zero, sem alterar seu valor.

b) Na linguagem C, valores numéricos inteiros ou reais podem ser utilizados diretamente em condições do if. O valor zero é interpretado como falso, enquanto qualquer valor diferente de zero é interpretado como verdadeiro. Assim, se a expressão resultar em zero, o bloco será ignorado; se resultar em um valor diferente de zero, será executado.

c) Na instrução if (x = -5), a variável x recebe o valor -5. De acordo com o padrão ANSI C, qualquer valor diferente de zero é considerado verdadeiro, inclusive números negativos. Portanto, o bloco de código associado ao if será executado.

Questão 02 — Associação do Comando else e Aninhamento de Decisões
a) A mensagem impressa será:
Opção B

Isso acontece porque x > 10 é verdadeiro, então o segundo if é avaliado. Porém, y > 10 é falso, pois y vale 5. Dessa forma, o comando else é executado, exibindo Opção B.

b) Na linguagem C, a regra determina que o comando else sempre será associado ao if mais próximo que ainda não tenha um else correspondente. Essa regra também é conhecida como dangling else.

c) Reescrevendo o código com chaves para deixar o aninhamento explícito:
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    } else {
        printf("Opção B\n");
    }
}

Questão 03 — Operador Condicional Ternário vs. Estrutura if-else
a) O operador ternário (? :) funciona como uma condição simplificada. Primeiro, verifica se media >= 7.0. Se a condição for verdadeira, armazena o caractere 'A' na variável situacao. Caso seja falsa, armazena 'R'.

Como media = 6.8, a condição é falsa. Portanto, será armazenado o valor 'R', indicando reprovação.

b) Utilizando a estrutura tradicional if-else:
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}


c) Não. O operador ternário não substitui adequadamente todas as estruturas if-else da linguagem C. Ele é mais indicado para condições simples que retornam um dos dois valores possíveis.

Quando existem vários comandos, operações complexas ou blocos maiores de instruções, a estrutura tradicional if-else é mais adequada, pois permite organizar diferentes comandos dentro de cada bloco utilizando chaves.

Questão 04 — Seleção Múltipla com switch-case e Efeito Fall-Through
a) A saída exata no terminal será:
Prata
Ouro


Isso acontece porque a variável codigo possui valor 2. Assim, o programa entra no case 2 e imprime "Prata". Como não existe um break após esse comando, a execução continua para o próximo caso (case 3), imprimindo também "Ouro".

b) A instrução break serve para interromper a execução do bloco switch e sair da estrutura após encontrar o caso correspondente. Quando ela é omitida, ocorre o fenômeno chamado fall-through, no qual a execução continua nos próximos case, mesmo que seus valores sejam diferentes.

c) O comando switch aceita expressões de tipos inteiros, como int, char e short, além de tipos inteiros enumerados (enum). Não é permitido utilizar float ou double, pois o padrão ANSI C exige que a expressão do switch tenha tipo inteiro. Isso ocorre porque os valores dos case também precisam ser constantes inteiras.

Questão 05 — Avaliação de Curto-Circuito em Operadores Lógicos
a) A saída exata será:
a = 0, b = 5, c = 8


Isso acontece porque a != 0 é falso, já que a vale zero. Como o operador && exige que as duas condições sejam verdadeiras, a segunda expressão (++b > 5) não é avaliada. Portanto, b permanece 5 e o bloco else é executado, diminuindo c em 2.

b) A avaliação de curto-circuito acontece quando o programa interrompe a avaliação de uma expressão lógica assim que já consegue determinar seu resultado.
- Operador E (&&): se a primeira condição for falsa, a segunda não será executada, pois o resultado final já será falso.
- Operador OU (||): se a primeira condição for verdadeira, a segunda não será executada, pois o resultado final já será verdadeiro.
c) Se a condição for alterada para if (a == 0 || ++b > 5), os valores finais serão:
- a = 0
- b = 5
- c = 20
Isso acontece porque a == 0 é verdadeiro. Como o operador || já possui uma condição verdadeira, a segunda expressão não é avaliada e b permanece 5. O bloco if é executado, acrescentando 10 ao valor de c, que passa de 10 para 20.

Questão 06 — Construções else-if e Análise Lógica de Intervalos
a) Para idade = 65, a saída será:
Idoso
Adulto
Jovem


Isso acontece porque os três comandos if são independentes. Como a idade é 65, todas as três condições são verdadeiras. O else está associado apenas ao último if (idade >= 12), por isso não é executado.

b) A diferença é que os comandos if independentes verificam todas as condições individualmente, permitindo que mais de um bloco seja executado. Já a cadeia else-if verifica as condições em sequência e executa somente o primeiro bloco cuja condição seja verdadeira, ignorando as demais.

c) Reescrevendo o programa com else-if:
int idade = 65;

if (idade >= 60) {
    printf("Idoso\n");
}
else if (idade >= 18) {
    printf("Adulto\n");
}
else if (idade >= 12) {
    printf("Jovem\n");
}
else {
    printf("Criança\n");
}

Dessa forma, apenas uma categoria será impressa, pois assim que uma condição verdadeira for encontrada, as demais serão ignoradas.