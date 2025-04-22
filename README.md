# ft_printf

> 🎯 A custom implementation of the `printf` function in C, part of the 42 curriculum.

## 📚 About

**ft_printf** is a project from 42 that requires students to implement their own version of the `printf` function. 
This project deepens your understanding of variadic functions, memory management, and formatting strings in C. 
The challenge is to reproduce the behavior of the standard `printf` function, but with your own implementation.

The goal is to handle various format specifiers and edge cases, implement the function efficiently, and adhere to the C programming language's low-level memory management principles.

## 🧠 Objectives

- Implement the `printf` function from scratch with support for format specifiers like `%c`, `%s`, `%d`, `%x`, etc.
- Handle different argument types and convert them correctly (e.g., integers, strings, pointers).
- Manage memory efficiently and ensure the function behaves identically to the original `printf`.

## ⚙️ Features

The `ft_printf` function supports a variety of format specifiers, including:

- `%c` — Character
- `%s` — String
- `%d` or `%i` — Integer
- `%u` — Unsigned integer
- `%x` or `%X` — Hexadecimal (lowercase or uppercase)
- `%p` — Pointer
- `%%` — Literal percent sign

### Example usage:

```bash
$ ./ft_printf "Hello, %s! Your score is %d%%" "Alice" 95
Hello, Alice! Your score is 95%
```

✅ Allowed functions
malloc, free, write,
va_start, va_arg, va_copy, va_end
