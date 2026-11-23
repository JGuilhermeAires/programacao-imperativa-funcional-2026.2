# Lista 5 — Programação Imperativa e Funcional

## PARTE I: Questões teóricas e analíticas

---

## Questão 01. Anatomia de uma função e o papel do protótipo

**a) Protótipo, chamada e definição de `celsius()`**

| Etapa | Trecho no código | Papel |
|---|---|---|
| Protótipo | `float celsius(float);` | Declara ao compilador, *antes* do uso, o nome da função, o tipo do retorno (`float`) e a quantidade/tipo dos parâmetros (um `float`). Não contém corpo. |
| Chamada | `c = celsius(f);` | Ponto em que a função é executada: o valor de `f` é copiado para o parâmetro `fahr`, o controle passa à função e o valor retornado é atribuído a `c`. |
| Definição | `float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; }` | Contém o corpo da função, isto é, a implementação real: o que ela calcula e o que devolve. |

**b) Função do protótipo e o que ocorre sem ele**

O protótipo permite ao compilador **verificar cada chamada** contra a assinatura da função: se o número de argumentos está correto, se os tipos são compatíveis (convertendo-os quando possível, p. ex. `int` → `float`) e se o valor de retorno é usado de forma coerente com o tipo declarado.

Se o protótipo fosse omitido e a função fosse definida depois da `main()`, o compilador chegaria à chamada `celsius(f)` sem conhecer a função. Em compiladores mais antigos (C89) ele assumiria uma *declaração implícita* (`int celsius()`), **sem nenhuma verificação de parâmetros**: os argumentos seriam passados "como estão" (um `float` seria promovido a `double`) e o retorno seria interpretado como `int`, produzindo lixo ou resultado errado em tempo de execução, sem aviso de erro. Em compiladores modernos (C99 em diante) isso gera, no mínimo, *warning* de declaração implícita ou até erro de compilação; ainda assim, nenhuma checagem de tipos/quantidade de argumentos seria feita corretamente. Se a função fosse definida **antes** da `main()`, a própria definição já serviria de declaração.

**c) Tipo da função `celsius()`**

O tipo é **`float`**. O tipo de uma função é o tipo do valor que ela devolve porque a chamada de função é uma *expressão*, e toda expressão em C precisa ter um tipo. Em `c = celsius(f);` o compilador precisa saber que a expressão `celsius(f)` produz um `float` para decidir como armazená-la, convertê-la ou usá-la em operações. Os parâmetros, por outro lado, são apenas *entradas* que descrevem como chamar a função; eles não determinam o que a chamada vale como expressão. (O tipo dos parâmetros faz parte da *assinatura*, usada para verificar as chamadas, mas não define o "tipo da função".)

---

## Questão 02. O comando `return` e suas limitações

**a) Quantos valores o `return` devolve? O que se pretendia em `calcular()`?**

Uma função em C pode devolver **no máximo um valor** por meio de `return`. Na função `calcular()`, o programador queria devolver **dois resultados** (a soma e a média) com `return soma, media;`. Porém, nessa linha a vírgula é o **operador vírgula**: ele avalia `soma`, descarta o resultado e entrega apenas o valor de `media`. Logo, a função retorna somente `media` (e, como é divisão inteira, truncada), e `soma` se perde. O compilador normalmente emite *warning* ("left-hand operand of comma has no effect"). A abordagem não cumpre o objetivo porque a sintaxe não cria uma "tupla" de retorno.

**b) Efeito do `return;` em `imprime_mensagem()`**

O `return;` **encerra imediatamente** a execução da função e devolve o controle ao ponto de chamada, sem devolver valor algum (a função é `void`). Na função, ele impede que a mensagem "Codigo processado" seja impressa quando `erro < 0`.

Ele **não é obrigatório** no final de uma função `void`: ao chegar na chave `}` de fechamento, o controle volta automaticamente ao chamador. O `return;` só é necessário quando se quer sair antes do fim da função.

**c) Reescrita: média e soma em funções separadas**

```c
int soma3(int a, int b, int c) {
    return a + b + c;
}

int calcular(int a, int b, int c) {   /* devolve apenas a média */
    int soma = a + b + c;
    int media = soma / 3;
    return media;
}
```

Em C precisamos de duas funções porque o comando `return` só carrega **um único valor** de volta ao chamador. Cada função, portanto, devolve um único resultado. (Para obter vários resultados de uma só função seria necessário outro mecanismo, como ponteiros/parâmetros de saída ou `struct`, que vão além do uso apenas de `return`.)

---

## Questão 03. Funções `void`, parâmetros e assinaturas

**a) Classificação dos protótipos**

| Protótipo | Parâmetros de entrada | Valor de retorno |
|---|---|---|
| `void exibe_mensagem(char* msg);` | Sim (um parâmetro `char*`, ponteiro para string) | Não (`void`) |
| `int obter_codigo(void);` | Não (`void` indica lista vazia) | Sim (`int`) |
| `void limpar_tela(void);` | Não | Não |

**b) Função com retorno × procedimento (`void`)**

- **Função com retorno** calcula/obtém um valor e o devolve ao chamador, que pode usá-lo em expressões, atribuições ou condições. É a escolha adequada quando o objetivo é *produzir um resultado*; p. ex., `int soma(int a, int b)` ou `int obter_codigo(void)`, que lê e devolve um código.
- **Procedimento (`void`)** executa uma *ação* (efeito colateral) e não devolve valor. É a escolha adequada quando o objetivo é *fazer algo*, como imprimir na tela; p. ex., `void exibe_mensagem(char* msg)` ou `void limpar_tela(void)`.

**c) `x = limpar_tela();` é válida?**

**Não.** `limpar_tela()` é do tipo `void`, ou seja, **não produz valor**. Tentar atribuir o "resultado" a `x` é um erro de compilação (o valor de uma expressão `void` não pode ser usado). A chamada correta é apenas `limpar_tela();`.

---

## Questão 04. Recursão: caso base, passo recursivo e pilha de execução

```c
long fatorial(int n) {
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}
```

**a) Caso base, passo recursivo e remoção do caso base**

- **Caso base:** `n == 0`, que retorna `1` sem fazer nova chamada (é a condição de parada).
- **Passo recursivo:** `(long)n * fatorial(n - 1)`, que reduz o problema a uma versão menor (`n - 1`).

Se o caso base fosse removido, a função continuaria chamando a si mesma com `n` cada vez menor (`..., 2, 1, 0, -1, -2, ...`) **indefinidamente**: a recursão nunca terminaria, as chamadas se acumulariam na pilha até esgotá-la (*stack overflow*) e o programa seria encerrado com falha (por exemplo, *segmentation fault*).

**b) Rastreamento de `fatorial(4)`**

*Fase de empilhamento (chamadas, sem retorno ainda):*

```
fatorial(4) = 4 * fatorial(3)       // aguarda fatorial(3)
  fatorial(3) = 3 * fatorial(2)     // aguarda fatorial(2)
    fatorial(2) = 2 * fatorial(1)   // aguarda fatorial(1)
      fatorial(1) = 1 * fatorial(0) // aguarda fatorial(0)
        fatorial(0) -> CASO BASE, devolve 1
```

*Fase de desempilhamento (retornos, de dentro para fora):*

| Chamada | Cálculo | Valor devolvido |
|---|---|---|
| `fatorial(0)` | caso base | **1** |
| `fatorial(1)` | `1 * 1` | **1** |
| `fatorial(2)` | `2 * 1` | **2** |
| `fatorial(3)` | `3 * 2` | **6** |
| `fatorial(4)` | `4 * 6` | **24** |

Resultado final: `fatorial(4) = 24`.

**c) Pilha de execução**

A cada chamada recursiva o sistema cria na **pilha de execução** (*call stack*) um novo **registro de ativação** (*stack frame*) para aquela chamada, contendo o parâmetro `n`, variáveis locais e o endereço de retorno. Cada chamada tem sua própria cópia de `n`, independente das demais. O quadro só é removido (desempilhado) quando a chamada termina e devolve seu valor ao quadro de baixo, que então retoma o cálculo pendente.

Como a pilha tem **tamanho limitado**, uma recursão sem caso base (ou que nunca o alcança) empilha quadros sem parar até a pilha estourar (*stack overflow*), causando falha do programa.

---

## Questão 05. Diretiva `#define`, constantes e macros com argumentos

```c
#define PI 3.14
#define SQR(x) ((x)*(x))
#define DOBRO(x) x*2
```

**a) Saída de cada `printf` e por que são diferentes**

- `SQR(2+3)` expande para `((2+3)*(2+3))` = `5 * 5` = **25**
- `DOBRO(2+3)` expande para `2+3*2` = `2 + 6` = **8** (e não 10)

A macro é uma **substituição textual** feita antes da compilação, sem avaliar o argumento antes. Em `SQR`, os **parênteses de proteção** em volta de cada `x` e do corpo inteiro preservam a ordem esperada das operações, de modo que `2+3` é calculado primeiro. Em `DOBRO`, sem parênteses, a precedência de `*` sobre `+` faz o `3` ser multiplicado por 2 antes da soma. Saída:

```
25
8
```

**b) Por que não termina com `;`? Por que maiúsculas?**

`#define` é uma **diretiva do pré-processador**, não um comando da linguagem C; ela termina no fim da linha. Se houvesse `;`, ele faria parte do texto da substituição (ex.: `#define PI 3.14;` faria `area = PI * r;` virar `area = 3.14; * r;`), gerando erros de sintaxe.

Usam-se **identificadores em maiúsculas** por convenção, para distinguir visualmente constantes e macros de variáveis e funções comuns (que usam minúsculas), deixando claro no código que ali ocorre uma substituição textual.

**c) `#define PRN (n) printf("%d", n)` e diferenças entre macro e função**

Está incorreto porque o **espaço** entre `PRN` e `(n)` faz o pré-processador entender `PRN` como uma macro **sem argumentos** cujo texto de substituição é `(n) printf("%d", n)`. A forma correta é **sem espaço** entre o nome da macro e o parêntese:

```c
#define PRN(n) printf("%d", n)
```

Diferenças entre macro com argumentos e função comum:

- A macro é **substituição textual** feita pelo pré-processador (não há chamada em tempo de execução, nem empilhamento); a função é compilada e **chamada** em execução.
- A macro **não verifica tipos** dos argumentos; a função verifica e converte.
- Na macro o argumento é substituído literalmente e pode ser **avaliado mais de uma vez** (ex.: `SQR(i++)` incrementa `i` duas vezes) e pode haver problemas de precedência; na função o argumento é avaliado **uma única vez** antes da chamada.

---

## Questão 06. Diretivas `#include`, `#undef` e compilação condicional

**a) `#include <stdio.h>` × `#include "areas.h"`**

- `#include <stdio.h>` (**colchetes angulares**): o pré-processador procura o arquivo nos **diretórios padrão** do compilador/sistema. Usa-se para **bibliotecas padrão** e do sistema.
- `#include "areas.h"` (**aspas**): procura primeiro no **diretório do arquivo-fonte** (ou do projeto) e, se não achar, nos diretórios padrão. Usa-se para **arquivos de cabeçalho criados pelo próprio programador**.

**b) Efeito de `#undef SOMA`**

`#undef SOMA` **remove a definição** da macro `SOMA`: a partir dessa linha, `SOMA` deixa de existir para o pré-processador (e usar `SOMA(1,2)` depois dela não será mais expandido). Isso permite, por exemplo, redefinir a macro com outro corpo.

A forma `#undef SOMA(x,y)` está incorreta porque `#undef` recebe **apenas o nome** (identificador) da macro, sem a lista de parâmetros.

**c) Se `DEBUG` não foi definido**

A mensagem impressa será **`Modo normal`**, pois `#ifdef DEBUG` é falso e o trecho do `#else` é o mantido.

Essa decisão é tomada no **pré-processamento**, antes da compilação, e não durante a execução do programa: o pré-processador descarta o trecho não selecionado, e o compilador só enxerga o código restante (`printf("Modo normal\n");`). Por isso as diretivas (`#include`, `#define`, `#undef`, `#ifdef`...) **não aparecem no executável final**: elas são processadas e removidas antes de o código-fonte chegar ao compilador; no binário existe apenas o código C já resultante dessas substituições.

---

## PARTE II: Questões práticas

Os códigos das questões 07 a 28 estão nos arquivos `q7.c`, `q8.c`, ..., `q28.c` (a Questão 22 também usa o cabeçalho `areas.h`).

Compilação sugerida: `gcc -Wall -o qN qN.c` (na Questão 22: `gcc -Wall -o q22 q22.c`, com `areas.h` na mesma pasta; na Questão 24: `gcc -DDEBUG -o q24 q24.c` para a versão com depuração e `gcc -o q24 q24.c` para a versão sem).
