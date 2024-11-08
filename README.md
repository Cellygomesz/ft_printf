# 📖 Ft_printf
<br>

<p align="center">
  <img width="180" src="https://github.com/0bvim/42-project-badges/raw/main/badges/ft_printfe.png">
</p>

<br>


<p text align="center"> Para o projeto ft_printf da 42Rio, recriei a famosa função printf da biblioteca C, a `<stdio.h>`. </p>

<br>

<p text align="center"> Conversões suportadas: </p>
<p text align="center"> %, c, s, p, i, d, u, x e X. </p>

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
