# 📚 Libft — 42SP

Projeto base do currículo da **42**, cujo objetivo é recriar funções essenciais da biblioteca padrão da linguagem C, desenvolvendo uma **biblioteca própria reutilizável**.

---

## 🎯 Objetivo

Implementar do zero uma biblioteca em C, aprofundando o entendimento sobre:

- funcionamento da memória
- manipulação de ponteiros
- estruturas de dados
- organização modular de código
- boas práticas de programação

---

## 🧠 Conceitos Trabalhados

- Ponteiros
- Alocação dinâmica (`malloc`, `free`)
- Manipulação de strings
- Funções da libc
- Estruturas (`struct`)
- Listas encadeadas
- Modularização
- Makefile
- Norminette

---

## 📂 Conteúdo da Biblioteca

### Parte 1 — Funções da Libc
- `ft_strlen`
- `ft_strchr`
- `ft_strdup`
- `ft_memcpy`
- `ft_memset`
- `ft_bzero`
- `ft_atoi`
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, etc.

### Parte 2 — Funções adicionais
- `ft_substr`
- `ft_strjoin`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`

### Parte Bônus
- Listas encadeadas:
  - `ft_lstnew`
  - `ft_lstadd_front`
  - `ft_lstadd_back`
  - `ft_lstdelone`
  - `ft_lstclear`
  - `ft_lstiter`
  - `ft_lstmap`

---

## ⚙️ Compilação

```bash
make

Gera o arquivo:
libft.a

Para limpar:
make clean

make fclean



▶️ Exemplo de uso
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello 42!");
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}


🛠️ Tecnologias
Linguagem C

Makefile

Linux

Norminette

