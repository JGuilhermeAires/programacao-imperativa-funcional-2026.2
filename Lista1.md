# Lista 1

## Q4

### Resposta

1. O ponto e vírgula após `#include <stdlib.h>` está incorreto.
2. `Main` deve ser escrito como `main`.
3. A função deve ser declarada como `int main()`.
4. O corpo da função deve utilizar `{ }`.
5. O texto do `printf()` deve estar entre aspas.
6. `cout << endl` pertence ao C++, não ao C.

### Código corrigido

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        printf("Existem %d semanas no ano.\n", 52);
        system("PAUSE");
        return 0;
    }

## Q5

### Resposta

Não. O código não está correto segundo o padrão ANSI C.

1. Falta `#include <stdio.h>` para utilizar `printf()`.
2. Falta `#include <stdlib.h>` para utilizar `system()`.
3. O correto é `int main()`.
4. Falta `return 0;`.
5. `system("pause")` é específico do Windows e não faz parte do ANSI C.

## Q6

### Resposta

1. `b` e `c` não foram declaradas e `:` deve ser substituído por `;`.
2. O correto é `int main()`.
3. As aspas do `printf()` estão incorretas.
4. A variável `d` não foi declarada.
5. O `printf()` possui três `%d`, portanto deve receber `a`, `b` e `c`.
6. Falta `#include <stdio.h>`.
7. `system("pause")` não faz parte do padrão ANSI C.

### Código corrigido

    #include <stdio.h>

    int main()
    {
        int a = 1, b = 2, c = 3;
        printf("Os números são: %d %d %d\n", a, b, c);
        return 0;
    }

## Q7

### Resposta

a) `printf("\n\tBom dia! Shirley.");`

Saída: uma quebra de linha, uma tabulação e `Bom dia! Shirley.`

b) `printf("Você já tomou café? \n");`

Saída: `Você já tomou café?` seguida de uma quebra de linha.

c) `printf("\n\nA solução não existe!\nNão insista.");`

Saída: duas quebras de linha, `A solução não existe!`, uma quebra de linha e `Não insista.`

d) `printf("Duas\tlinhas\tde\tsaída\nou\tuma?");`

Saída:

    Duas    linhas    de    saída
    ou    uma?

e) `printf("%s\n%s\n%s\n", "um", "dois", "três");`

Saída:

    um
    dois
    três

## Q8

### Resposta

- `\n` → quebra de linha.
- `\t` → tabulação.
- `\"` → imprime aspas duplas.

Saída:

    [quebra de linha]
        "Primeiro programa"

No Windows, `system("PAUSE")` normalmente exibe:

    Pressione qualquer tecla para continuar. . .

## Q9

### Resposta

O primeiro `printf()` utiliza `%c` para imprimir caracteres individuais:

- `'\n'` → quebra de linha.
- `'\t'` → tabulação.
- `'\"'` → aspas duplas.

O segundo `printf()` está incorreto porque `%c` recebe um caractere, mas `"\""` é uma string.

O correto é:

    printf("%c", '\"');

### Código corrigido

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
        printf("%c", '\"');
        system("PAUSE");
        return 0;
    }

### Saída

    [quebra de linha]
        "Primeiro programa"

## Q10

### Resposta

**b Verdadeiro.**

A linguagem C é `case sensitive`, portanto `peso`, `Peso` e `PESO` são identificadores diferentes.

## Q11

| Constante | Classificação | Tipo Base |
|---|---|---|
| `\r` | Sequência de escape | `char` |
| `2130` | Constante inteira decimal | `int` |
| `-123` | Constante inteira decimal | `int` |
| `33.28` | Constante de ponto flutuante | `double` |
| `0XFA` | Constante inteira hexadecimal | `int` |
| `0101` | Constante inteira octal | `int` |
| `2.0e30` | Constante de ponto flutuante | `double` |
| `\xDC` | Sequência de escape hexadecimal | `char` |
| `'\"'` | Constante de caractere | `char` |
| `'\\'` | Constante de caractere | `char` |
| `'F'` | Constante de caractere | `char` |
| `0` | Constante inteira decimal | `int` |
| `'\0'` | Constante de caractere | `char` |
| `"F"` | Constante string | `char[]` |
| `-4567.89` | Constante de ponto flutuante | `double` |

## Q12

| Instrução | Status | Justificativa |
|---|---|---|
| a) `int a;` | Correto | Declara uma variável inteira. |
| b) `float b;` | Correto | Declara uma variável de ponto flutuante. |
| c) `double float c;` | Incorreto | `double` e `float` são tipos distintos e não podem ser usados juntos dessa forma. |
| d) `unsigned char d;` | Correto | Declara um caractere sem sinal. |
| e) `unsigned e;` | Correto | Equivale a `unsigned int e;`. |
| f) `long float f;` | Incorreto | `long float` não existe em C. O correto seria `long double`. |
| g) `long g;` | Correto | Equivale a `long int g;`. |
| h) `long double h;` | Correto | Declara uma variável de ponto flutuante de precisão estendida. |

## Q13

c

## Q14

a

## Q15

c

## Q16

c

## Q17

a, b, c