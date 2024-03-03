# libft

**Description:**

`libft` is a custom C library that replicates essential functions from the standard C library (`libc`). It is designed to provide a set of utility functions for string manipulation, memory handling, and list operations.

**Table of Contents:**

1. [Introduction](#introduction)
2. [Usage](#usage)
3. [File Structure](#file-structure)
4. [Building](#building)
5. [Bonus Functions](#bonus-functions)
6. [License](#license)

## Introduction

The `libft` library aims to provide a comprehensive set of functions commonly used in C programming. It includes standard string manipulation, memory handling, and additional list manipulation functions.

## Usage

To use `libft` in your project, follow these steps:

1. Clone the repository:

   ```bash
   git clone <repository-url>
   ```

- Include the necessary header file in your source code:
  ```
   #include "libft.h"
  ```
- Compile your program with the libft.a library:
  ```
  gcc your_program.c -L./libft -lft -o your_program
  ```
- Run your program:
  ```
  ./your_program
  ```

## File Structure
The library is organized into the following files:
  ```
  CFILES = ft_isalnum.c ft_isascii.c ft_isalpha.c ft_isdigit.c ft_tolower.c \
         ft_toupper.c ft_strlen.c ft_isprint.c ft_memset.c ft_bzero.c \
         ft_memcpy.c ft_memmove.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
         ft_atoi.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c \
         ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
         ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
         ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_CFILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
               ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
               ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
```
## Building
To build the library, run:
  ```
  make
  ```
This will compile the source files and create the libft.a static library.
## Bonus Functions
In addition to the standard functions, libft provides bonus functions for linked list manipulation. These functions are compiled into the libft.a library.

## License
This project is licensed under the MIT License - see the LICENSE file for details.
```
Make sure to replace `<repository-url>` with the actual URL of your repository. Feel free to customize the content further based on your specific project details.
```
