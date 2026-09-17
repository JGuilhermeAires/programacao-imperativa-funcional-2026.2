Questão 01
Resposta

a) O valor exibido será:

O valor armazenado eh: 2

b) Isso acontece porque valor_inteiro é uma variável do tipo int, que só armazena números inteiros. Ao receber 2.97, a parte decimal é descartada.

Esse processo é chamado de truncamento, causado por uma conversão implícita de tipos.

c) Para manter o valor decimal, pode-se usar float ou double. E se quiser arredondar será round()

Questão 02
Resposta

a) A biblioteca <conio.h> não faz parte do padrão ANSI C. Ela depende do sistema/compiler e pode não existir em sistemas como Linux e macOS. Por isso, seu uso diminui a portabilidade do programa.

b) As funções portáveis da <stdio.h> são:

getchar() — lê um caractere.
putchar() — exibe um caractere.

c) Um exemplo é:

#include <stdio.h>

int main() {
    int c;

    do {
        c = getchar();
    } while (c == '\n');

    printf("Caractere lido: %c\n", c);

    return 0;
}

O do...while faz com que quebras de linha (\n) sejam ignoradas antes de armazenar o caractere.

Questão 04
Resposta

Valores iniciais:

a = 1, b = 2, c = 3, d = 4;
1. a += b + c;
a = 1 + 2 + 3
a = 6

Agora:

a = 6, b = 2, c = 3, d = 4
2. b *= c = d + 2;

Primeiro:

c = d + 2
c = 4 + 2
c = 6

Depois:

b = b * c
b = 2 * 6
b = 12

Agora:

a = 6, b = 12, c = 6, d = 4
3. d %= a + a + a;
d = 4 % (6 + 6 + 6)
d = 4 % 18
d = 4

Agora:

a = 6, b = 12, c = 6, d = 4
4. d -= c -= b -= a;

A avaliação acontece da direita para a esquerda.

Primeiro:

b -= a
b = 12 - 6
b = 6

Depois:

c -= b
c = 6 - 6
c = 0

Por último:

d -= c
d = 4 - 0
d = 4

Agora:

a = 6, b = 6, c = 0, d = 4
5. a += b += c += 7;

Novamente, a avaliação é da direita para a esquerda.

Primeiro:

c += 7
c = 0 + 7
c = 7

Depois:

b += c
b = 6 + 7
b = 13

Por último:

a += b
a = 6 + 13
a = 19
Valores finais
a = 19
b = 13
c = 7
d = 4

Questão 05
Resposta

Valores:

i = 1, j = 2, k = 3, n = 2;
x = 3.3, y = 4.4;

a) i < j + 3

1 < 2 + 3
1 < 5 → 1

Resultado: 1

b) 2 * i - 7 <= j - 8

2 * 1 - 7 <= 2 - 8
-5 <= -6 → 0

Resultado: 0

c) -x + y >= 2.0 * y

-3.3 + 4.4 >= 2.0 * 4.4
1.1 >= 8.8 → 0

Resultado: 0

d) x == y

3.3 == 4.4 → 0

Resultado: 0

e) !(n - j)

!(2 - 2)
!0 → 1

Resultado: 1

f) !n - j

!2 - 2
0 - 2 → -2

Resultado: -2

Como a expressão não é uma comparação, seu resultado numérico é -2, que em um contexto lógico seria considerado verdadeiro.

g) i && j && k

1 && 2 && 3 → 1

Resultado: 1

h) i || j - 3 && k

Primeiro j - 3, depois && e por último ||:

1 || (2 - 3) && 3
1 || (-1 && 3)
1 || 1
→ 1

Resultado: 1

i) i < j && 2 >= k

1 < 2 && 2 >= 3
1 && 0 → 0

Resultado: 0

j) i == 2 || j == 4 || k == 5

1 == 2 || 2 == 4 || 3 == 5
0 || 0 || 0 → 0

Resultado: 0

Questão 06
Resposta

a) No incremento prefixado (++n), a variável é incrementada primeiro e depois seu valor é atribuído.

Trecho A:

int n = 5;
int x = ++n;

Primeiro n passa para 6, depois x recebe 6.

Trecho A: n = 6, x = 6

No incremento pós-fixado (m++), o valor é usado primeiro e depois a variável é incrementada.

Trecho B:

int m = 5;
int y = m++;

Primeiro y recebe 5, depois m passa para 6.

Trecho B: m = 6, y = 5

b) A expressão:

printf("%d\t%d\t%d\n", n, n+1, n++);

é problemática porque n é lida várias vezes e também modificada com n++ na mesma expressão.

Em C, a ordem de avaliação dos argumentos de uma função como printf() não é garantida dessa forma. Como n é modificada e também acessada sem uma sequência de avaliação adequada, o resultado é comportamento indefinido.

Por isso, o programa pode apresentar resultados diferentes dependendo do compilador ou das otimizações utilizadas.