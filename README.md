## Project Overview

The `_printf` function is a simplified recreation of the standard C library's `printf` function, which formats and prints output according to format specifiers. This implementation supports a subset of the standard format specifiers while maintaining a similar interface to the original function.

## Usage

The function prototype is:

```c
int _printf(const char *format, ...);
```

### Basic Examples

```c
#include "main.h"

int main(void)
{
    int len;
    
    /* Basic string printing */
    len = _printf("Hello, World!\n");
    _printf("Printed %d characters\n", len);
    
    /* Integer printing */
    _printf("Number: %d\n", 12345);
    
    /* Character printing */
    _printf("Character: %c\n", 'H');
    
    /* String printing */
    _printf("String: %s\n", "This is a string");
    
    /* Percent sign printing */
    _printf("Percent sign: %%\n");
    
    return (0);
}
```

## Supported Format Specifiers

The implementation likely supports these common format specifiers:

- `%c`: Print a single character
- `%s`: Print a string of characters
- `%d` or `%i`: Print a decimal (base 10) number
- `%%`: Print a percent sign

## Project Structure

1. **Header file**: Contains function prototypes and necessary data structures
2. **Source files**: The implementation of the _printf function and its helper functions
3. **Makefile**: For building the project

## How It Works

![Flowchart](https://raw.githubusercontent.com/unixpup/holbertonschool-printf/refs/heads/main/printf_flowchart.png)

1. The function receives a format string and a variable number of arguments
2. It traverses the format string character by character
3. When it encounters a regular character, it outputs it directly
4. When it encounters a '%' followed by a format specifier, it:
   - Retrieves the corresponding argument using va_arg
   - Formats and outputs the argument according to the specifier
5. The function returns the total number of characters printed

## Compilation

To compile a program using this custom printf function:

```
make
```

