# 📖 Ft_printf

Para o projeto ft_printf da 42Rio, recriei a famosa função printf da biblioteca C, a `<stdio.h>`.

<br>

<img width="345" src="https://media.tenor.com/5Q4cg4hXA9IAAAAM/nouns-dao.gif">

### Conversões suportadas:
`%`, `c`, `s`, `p`, `i`, `d`, `u`, `x` e `X`.

<br>

## ⚙️ Como usar a função

<br>

Crie uma main.c, exemplo:
```c
// Include the header
#include "ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("Testing ft_printf!");
      return (0);
}
```

<br>

Compile o arquivo main.c com a biblioteca ft_printf e execute o programa:
```bash
gcc main.c libftprintf.a && ./a.out
```

<br>

Sua saída deve ser:
```
Testing ft_printf!
```
