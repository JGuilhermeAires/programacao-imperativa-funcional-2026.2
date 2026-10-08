Questão 01
Resposta

Alternativa correta: c)

Em C, letras maiúsculas e minúsculas são diferenciadas. Portanto, valor, VALOR, peso, Peso, taxa e TAXA são identificadores diferentes.

As alternativas a, b e d estão incorretas porque a linguagem C possui sensibilidade a maiúsculas e minúsculas independentemente do sistema operacional.

Questão 02
Resposta

Os três erros são:

#include <stdlib.h>; — não deve ter ; após o #include.
int Main() — C diferencia maiúsculas e minúsculas. O correto é int main().

printf( A idade do aluno eh: %d anos.. , idade); — a mensagem precisa estar entre aspas. O correto seria:

printf("A idade do aluno eh: %d anos.\n", idade);

Além disso, cout << endl; é comando de C++, não de C. Em C, pode ser usado printf("\n");.

Uma versão corrigida seria:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 20;

    printf("A idade do aluno eh: %d anos.\n", idade);

    printf("\n");
    system("PAUSE");

    return 0;
}

Questão 03
Resposta

Valores iniciais:

a = 2, b = 4, c = 5, d = 10
1. a += b + c
a = 2 + 4 + 5
a = 11
2. b *= c = d - 2

Primeiro:

c = 10 - 2 = 8

Depois:

b = 4 * 8 = 32

Então:

b = 32
c = 8
3. d %= a + 3
d = 10 % (11 + 3)
d = 10
4. a += b += c += 5

Da direita para a esquerda:

c = 8 + 5 = 13
b = 32 + 13 = 45
a = 11 + 45 = 56
Resultado final
a = 56
b = 45
c = 13
d = 10

Questão 04
Resposta

Considerando i = 2, j = 3, k = 0, x = 2.5 e y = 5.0:

a) i < j + 2

2 < 3 + 2
2 < 5 → 1

Resultado: 1 (Verdadeiro)

b) 2 * i - 5 <= j - 4

4 - 5 <= 3 - 4
-1 <= -1 → 1

Resultado: 1 (Verdadeiro)

c) !k && (x + y >= 7.5)

!0 && (7.5 >= 7.5)
1 && 1 → 1

Resultado: 1 (Verdadeiro)

d) !(i == j) || (y / x == 2.0)

!(2 == 3) || (5.0 / 2.5 == 2.0)
1 || 1 → 1

Resultado: 1 (Verdadeiro)

e) i == 2 && j == 4 || k == 0

&& possui prioridade sobre ||:

1 && 0 || 1
0 || 1 → 1

Resultado: 1 (Verdadeiro)

Resumo
a) 1
b) 1
c) 1
d) 1
e) 1

Questão 05

Resposta

a) A diferença é que o while testa a condição antes de executar o bloco, podendo executar zero vezes. Já o do-while executa o bloco pelo menos uma vez e só depois verifica a condição.

b) O for é mais adequado quando sabemos previamente o início, a condição de parada e o incremento da repetição. Por exemplo, para contar de 1 até 100. Ele deixa essas três partes organizadas em uma única linha.

c) while (condicao); não é necessariamente um erro de compilação. O ; representa um corpo vazio para o while. Porém, pode causar um erro de lógica. Se condicao for verdadeira e nunca mudar, o programa ficará preso em um loop infinito.

Exemplo:

while (1);

Nesse caso, o programa ficará executando o laço indefinidamente.

Questão 06
Resposta
a)

O erro acontece porque a variável soma foi declarada dentro do bloco do for, então ela só existe dentro desse bloco. O printf está fora do for e não consegue acessar soma.

b)
i = 1: executa, soma 1² = 1.
i = 2: executa, soma 2² = 4.
i = 3: executa, soma 3² = 9.
i = 4: executa, soma 4² = 16.
i = 5: continue pula o restante da iteração.
i = 6: executa, soma 6² = 36.
i = 7: executa, soma 7² = 49.
i = 8: break encerra o for imediatamente.

Porém, no código original, soma é criada novamente a cada iteração, então os valores não são acumulados.

c)

Para corrigir, soma deve ser declarada antes do for:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5)
            continue;

        if (i == 8)
            break;

        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");

    return 0;
}

Os valores somados são:

1² + 2² + 3² + 4² + 6² + 7²

= 1 + 4 + 9 + 16 + 36 + 49

Resultado impresso:

Soma final = 115