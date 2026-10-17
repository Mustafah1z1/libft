*This project has been created as part of the 42 curriculum by mabu-oma.*

# Libft

## Description

**Libft** is the first project of the 42 common core. The goal is to build your own C library, `libft.a`, that re-implements a set of standard C library functions and adds a collection of utility functions. This library is meant to be reused and extended in all future 42 projects.

The project is split into three parts:

- **Part 1 – Libc functions:** re-implementations of standard functions from `<ctype.h>`, `<string.h>` and `<stdlib.h>`, behaving exactly like the originals (same prototypes, apart from the `ft_` prefix).
- **Part 2 – Additional functions:** utility functions that are either not in the standard libc or are part of it in a different form.
- **Linked lists:** a basic singly linked list API built on the `t_list` structure.

### Library contents

**Part 1 – Libc functions**

| Category | Functions |
|---|---|
| Character checks / conversion | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| String handling | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory handling | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

**Part 2 – Additional functions**

| Function | Description |
|---|---|
| `ft_substr` | Allocates and returns a substring of a string. |
| `ft_strjoin` | Allocates and returns the concatenation of two strings. |
| `ft_strtrim` | Trims a set of characters from both ends of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter character. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Applies a function to each character, returning a new string. |
| `ft_striteri` | Applies a function to each character of a string, passing its index. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

**Linked lists**

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstsize` | Counts the nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstdelone` | Frees one node's content and the node itself. |
| `ft_lstclear` | Deletes and frees a node and all its successors. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

### Technical constraints

- Written in **C**, following the **Norm** (checked with `norminette`).
- No segmentation faults or undefined behavior (double free, etc.).
- All heap-allocated memory is properly freed when necessary.
- Compiled with `cc` and the flags `-Wall -Wextra -Werror`.
- Only the allowed external functions are used (`write`, `malloc`, `free`).
- No global variables.

## Instructions

### Compilation

Build the library with the provided `Makefile`:

```bash
make
```

This produces the static library `libft.a` at the root of the repository.

To also compile the bonus linked list functions:

```bash
make bonus
```

### Makefile rules

| Rule | Description |
|---|---|
| `make` / `make all` | Compiles the mandatory part and creates `libft.a`. |
| `make bonus` | Adds the bonus functions to `libft.a`. |
| `make clean` | Removes the object files (`.o`). |
| `make fclean` | Removes the object files and `libft.a`. |
| `make re` | Runs `fclean` followed by `all`. |

### Usage

Include the header in your source files:

```c
#include "libft.h"
```

Then compile your program and link it against the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

### Example

```c
#include "libft.h"

int main(void)
{
    char **words;

    words = ft_split("hello 42 world", ' ');
    ft_putendl_fd(words[0], 1);
    /* ... free words and each entry when done ... */
    return (0);
}
```

## Resources

### References

- [`man` pages](https://man7.org/linux/man-pages/) for the re-implemented functions (`man 3 strlen`, `man 3 memmove`, etc.)
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) by Kernighan & Ritchie
- [42 Norm](https://github.com/42School/norminette) – the coding standard used at 42
- [GNU Make documentation](https://www.gnu.org/software/make/manual/make.html)
- [Valgrind](https://valgrind.org/docs/manual/) for memory leak and error checking

### Use of AI

AI was used only for supporting tasks, such as drafting this README. All the code in this project was written, tested and understood by the author. <!-- Adjust this section to accurately reflect how you used AI, if at all. -->
