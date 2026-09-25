*This activity has been created as part of the 42 curriculum by YOUR_LOGIN.*

# Libft

## Description

Libft is a custom C library created as part of the 42 curriculum.

The goal of this project is to recreate a collection of standard C library functions and build additional utility functions from scratch. The project provides a better understanding of C programming, memory management, pointers, strings, arrays, dynamic allocation, and linked lists.

The library is divided into several parts:

* **Part 1 - Libc functions:** Reimplementation of commonly used functions from the C standard library.
* **Part 2 - Additional functions:** Utility functions for strings, memory allocation, file descriptors, and string manipulation.
* **Part 3 - Linked lists:** Functions for creating, manipulating, iterating over, and deleting linked lists.

The final result is a static library called `libft.a`, which can be included and linked with other C projects.

---

## Library Description

### Part 1 - Libc Functions

The first part recreates functions from the standard C library.

#### Character checks and conversions

* `ft_isalpha` — Checks whether a character is alphabetic.
* `ft_isdigit` — Checks whether a character is a digit.
* `ft_isalnum` — Checks whether a character is alphanumeric.
* `ft_isascii` — Checks whether a character belongs to the ASCII character set.
* `ft_isprint` — Checks whether a character is printable.
* `ft_toupper` — Converts a lowercase letter to uppercase.
* `ft_tolower` — Converts an uppercase letter to lowercase.

#### String functions

* `ft_strlen` — Returns the length of a string.
* `ft_strchr` — Locates the first occurrence of a character in a string.
* `ft_strrchr` — Locates the last occurrence of a character in a string.
* `ft_strncmp` — Compares two strings up to a specified number of characters.
* `ft_strlcpy` — Copies a string into a destination buffer with size limitation.
* `ft_strlcat` — Appends a string to another string with size limitation.
* `ft_strnstr` — Searches for a substring within a string.

#### Memory functions

* `ft_memset` — Fills a block of memory with a specified byte.
* `ft_bzero` — Sets a block of memory to zero.
* `ft_memcpy` — Copies a block of memory.
* `ft_memmove` — Copies memory while handling overlapping regions.
* `ft_memchr` — Searches for a byte in a block of memory.
* `ft_memcmp` — Compares two blocks of memory.

#### Conversion

* `ft_atoi` — Converts a string representation of an integer into an integer.

#### Dynamic memory and duplication

* `ft_calloc` — Allocates memory for an array and initializes it to zero.
* `ft_strdup` — Creates a dynamically allocated duplicate of a string.

---

### Part 2 - Additional Functions

The second part extends the library with additional utility functions.

#### String manipulation

* `ft_substr` — Creates a newly allocated substring from a given string.
* `ft_strjoin` — Concatenates two strings into a newly allocated string.
* `ft_strtrim` — Removes specified characters from the beginning and end of a string.
* `ft_itoa` — Converts an integer into a newly allocated string.
* `ft_strmapi` — Applies a function to each character of a string and returns a new string.
* `ft_striteri` — Applies a function to each character of a string.

#### File descriptor functions

* `ft_putchar_fd` — Writes a character to a file descriptor.
* `ft_putstr_fd` — Writes a string to a file descriptor.
* `ft_putendl_fd` — Writes a string followed by a newline to a file descriptor.
* `ft_putnbr_fd` — Writes an integer to a file descriptor.

#### Splitting

* `ft_split` — Splits a string into an array of strings using a specified delimiter.

---

### Part 3 - Linked Lists

The third part introduces singly linked lists.

A linked list consists of nodes. Each node contains:

* `content` — The data stored in the node.
* `next` — A pointer to the next node.

The library provides the following linked-list functions:

* `ft_lstnew` — Creates a new linked-list node.
* `ft_lstadd_front` — Adds a node to the beginning of a list.
* `ft_lstsize` — Returns the number of nodes in a list.
* `ft_lstlast` — Returns the last node of a list.
* `ft_lstadd_back` — Adds a node to the end of a list.
* `ft_lstdelone` — Deletes one node and frees its content using a provided function.
* `ft_lstclear` — Deletes and frees all nodes from a list.
* `ft_lstiter` — Applies a function to the content of every node.
* `ft_lstmap` — Creates a new list by applying a function to every node's content.

---

## Instructions

### Compilation

The project includes a `Makefile` that compiles the source files and creates the static library `libft.a`.

To compile the library:

```bash
make
```

This creates:

```text
libft.a
```

### Cleaning

Remove the object files:

```bash
make clean
```

Remove the object files and the library:

```bash
make fclean
```

Recompile the entire project:

```bash
make re
```

### Using the Library

Include the header file in your C source file:

```c
#include "libft.h"
```

Compile your program together with the library:

```bash
cc main.c -L. -lft -o program
```

Then execute it:

```bash
./program
```

---

## Project Structure

A typical project structure is:

```text
libft/
├── Makefile
├── libft.h
├── libft.a
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ...
├── ft_split.c
├── ft_lstnew_bonus.c
├── ft_lstadd_front_bonus.c
├── ...
└── README.md
```

The exact source files depend on the implemented functions and the project organization.

---

## Technical Concepts

This project focuses on several fundamental C programming concepts:

* Pointers
* Pointer arithmetic
* Strings and character arrays
* Memory manipulation
* Dynamic memory allocation with `malloc`
* Memory management and `free`
* Structures
* Function pointers
* Static functions
* File descriptors
* Linked lists
* Static libraries
* Makefiles
* Compilation and linking

The project also emphasizes safe memory management and correct handling of edge cases.

---

## Resources

### Documentation

* C standard library documentation and manual pages (`man`)
* `malloc(3)`
* `free(3)`
* `write(2)`
* `read(2)`
* `memcpy(3)`
* `memmove(3)`
* `strlen(3)`
* `strlcpy(3)`
* `strlcat(3)`

### 42 Resources

* 42 Libft subject
* 42 School documentation and project guidelines

### Testing

During development, external Libft testers and manual test programs can be used to verify function behavior, edge cases, and memory management.

### AI Usage

AI tools were used as a learning and development aid during this project.

They were mainly used for:

* Explaining the requirements of the Libft subject.
* Explaining C concepts such as pointers, `size_t`, `malloc`, `free`, structures, and linked lists.
* Clarifying function prototypes and expected behavior.
* Providing examples and test cases to understand edge cases.
* Helping analyze compiler errors, tester output, and Valgrind messages.
* Explaining the purpose and behavior of individual Libft functions.

AI was used for **explanation, debugging guidance, and learning support**. The implementation of the project was written and tested by the student.

---

## Author

**42 Login:** YOUR_LOGIN

**Project:** Libft

**School:** 42

