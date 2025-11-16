# Libft

Custom C library implemented as part of the **42** cursus.  
The goal of this project is to recreate a subset of the standard C library functions, plus a few extra utilities, and bundle them into a reusable static library: `libft.a`.

---

## 📚 Project Overview

> **School:** 42 Beirut
> **Project:** Libft  
> **Language:** C  

In **libft**, you re-implement low-level functions for:
- character and string handling  
- memory management  
- conversions  
- basic linked list utilities (bonus)

This library will be reused in many later 42 projects, so the focus is on:
- writing **clean, reliable C code**
- respecting the **42 Norm**
- understanding **pointers, memory, and edge cases**

---

## 🧩 Contents

> *Update this list according to what you actually implemented.*

### 1️⃣ Mandatory – libc-like functions

Functions for:
- **Character checks & transforms**
  - `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
  - `ft_toupper`, `ft_tolower`
- **Strings**
  - `ft_strlen`, `ft_strlcpy`, `ft_strlcat`
  - `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
  - `ft_strdup`
- **Memory**
  - `ft_memset`, `ft_bzero`
  - `ft_memcpy`, `ft_memmove`
  - `ft_memchr`, `ft_memcmp`
- **Allocation & conversion**
  - `ft_calloc`
  - `ft_atoi`

### 2️⃣ Additional functions

More useful helpers, for example:
- String creation & transformation:  
  `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- Number & file descriptor utilities:  
  `ft_itoa`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3️⃣ Bonus – linked list utilities (if enabled)

If you compiled with `make bonus`, the library also includes:
- `t_list` structure
- List manipulation:
  - `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
  - `ft_lstsize`, `ft_lstlast`
  - `ft_lstdelone`, `ft_lstclear`
  - `ft_lstiter`, `ft_lstmap`

---

## 🗂 Project Structure

```text
.
├── Makefile
├── libft.h
├── *.c          # implementation files
├── bonus/*.c    # (optional) bonus list functions
└── README.md
```

---

## ⚙️ Building the Library

Clone the repository and build:

```bash
git clone https://github.com/M677871/Libft.git
cd Libft

# Build mandatory part
make

# Build bonus part (if implemented)
make bonus

# Clean object files
make clean

# Remove objects + libft.a
make fclean

# Rebuild from scratch
make re
```

After `make`, you should have:

```text
libft.a   # static library
```

---

## 🧪 Using Libft in Your Project

1. **Copy** `libft.a` and `libft.h` into your project, or add this repo as a submodule.
2. Include the header in your C files:
   ```c
   #include "libft.h"
   ```
3. Compile and link with `libft.a`:

   ```bash
   gcc -Wall -Wextra -Werror main.c libft.a -o my_program
   ```

### Minimal example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *s = "Hello, libft!";
    size_t len = ft_strlen(s);

    printf("Length: %zu\n", len);
    return 0;
}
```

---

## ✅ Testing

You can test the library with your own mains or with external testers such as  
[`Tripouille/libftTester`](https://github.com/Tripouille/libftTester):

```bash
# inside the tester directory, with LIBFT_PATH set correctly
make m      # mandatory tests
make b      # bonus tests
make a      # all tests
```

Don’t forget to also:
- run **Norminette** on `.c` and `.h` files  
- check behavior on **edge cases** (NULL, empty strings, overflows, etc.)

---

## 🧠 Notes & Learning Goals

Working on libft helps to:

- understand how standard C functions work internally  
- practice pointer arithmetic and memory management  
- learn to debug segmentation faults and undefined behavior  
- get comfortable with 42’s **Norm** and project workflow

---

## 📎 License

This project is part of the 42 curriculum.  
You can reuse this code in your own 42 projects as allowed by the school’s rules.

---

## 👤 Author

- **Login:** `M677871`  
- **GitHub:** [@M677871](https://github.com/M677871)
