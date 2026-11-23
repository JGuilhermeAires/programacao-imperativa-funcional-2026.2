# SIMULADO 2ª UNIDADE — Programação Imperativa e Funcional

Questões de múltipla escolha (01, 02, 05, 06, 10, 11, 16 e 17) respondidas abaixo.
As questões de programação estão nos arquivos `q03.c`, `q04.c`, `q07.c`, `q08.c`, `q09.c`, `q12.c`, `q13.c`, `q14.c`, `q15.c`, `q18.c`, `q19.c` e `q20.c`.

---

## Questão 01 — Associação do `else` em decisões aninhadas

**Resposta: b) Y e, em seguida, Z.**

O `else` sempre se associa ao `if` mais próximo que ainda não tem `else`; aqui, ao `if (b > 5)` (a indentação do código não altera isso). Com `a = 8` e `b = 3`:

1. `a > 5` é verdadeiro, então entra no `if` externo.
2. `b > 5` é falso, então o `printf("X\n")` é pulado e executa-se o `else` ligado a esse `if`, imprimindo `Y`.
3. O `printf("Z\n")` está fora dos `if`s e sempre executa.

Saída: `Y` e depois `Z`.

---

## Questão 02 — Fall-through no `switch-case`

**Resposta: c) 5**

Com `op = 2`, a execução entra em `case 2` e, como não há `break` ali, **continua** para `case 3` até encontrar o `break`:

- `case 2`: `t += 2` → `t = 2`
- `case 3`: `t += 3` → `t = 5`, depois `break`.

O `printf` imprime `5`.

---

## Questão 05 — Passagem de parâmetros por valor

**Resposta: d) 3 7**

Em C, os parâmetros são passados **por valor**: `a` e `b` em `troca` são *cópias* de `x` e `y`. A troca acontece apenas nas cópias, que deixam de existir ao fim da função; `x` e `y` na `main` permanecem inalterados. Saída: `3 7`.

---

## Questão 06 — Rastreamento de função recursiva

**Resposta: a) 10**

```
f(4) = 4 + f(3)
f(3) = 3 + f(2)
f(2) = 2 + f(1)
f(1) = 1            (caso base, n <= 1)
```

Desempilhando: `f(2) = 2 + 1 = 3`, `f(3) = 3 + 3 = 6`, `f(4) = 4 + 6 = 10`. A função calcula a soma de 1 até n.

---

## Questão 10 — Elementos de uma matriz

**Resposta: c) 15**

`m[0][2] = 3`, `m[1][1] = 5` e `m[2][0] = 7` (a diagonal secundária). Soma: `3 + 5 + 7 = 15`.

---

## Questão 11 — Strings e o terminador nulo

**Resposta: b) 9 PROVA2026**

`strcat` acrescenta `"2026"` ao fim de `"PROVA"` (sobrescrevendo o `'\0'` e colocando um novo no final), resultando em `"PROVA2026"`. O vetor de 20 posições comporta isso. `strlen` conta os caracteres antes do `'\0'`: 5 + 4 = **9**. (O `'\0'` não é contado.)

---

## Questão 16 — Atribuição de estruturas

**Resposta: c) 1 9**

Estruturas podem ser atribuídas diretamente em C (`b = a;`), o que copia todos os campos. Depois da cópia, `a` e `b` são independentes: alterar `b.x` para 9 não afeta `a.x`, que continua 1. Saída: `1 9`.

---

## Questão 17 — Tamanho de uma união

**Resposta: d) 8**

Em uma `union`, todos os membros compartilham a mesma área de memória, e o tamanho é o do **maior membro** (respeitando o alinhamento): `char c[8]` ocupa 8 bytes, `int i` ocupa 4 e `double d` ocupa 8. O maior é 8 e o alinhamento exigido (do `double`) também é 8, então `sizeof(Dado) = 8`. (As alternativas 12, 16 e 20 seriam resultado de somar os membros, como em uma `struct`, o que não ocorre em uma união.)
