# ft_printf Project

_Because ft_putnbr() and ft_putstr() aren’t enough_

## Description
The ft_printf project is an assignment in the 42 school curriculum that aims to familiarize students with variadic functions and the principles of formatted output. In this project, you will be asked to implement a custom version of the printf function from the C standard library.

## Requirements
Your implementation of the printf function should support the following conversion types:
* `%c` - character
* `%s` - string
* `%p` - pointer address
* `%d` - signed integer
* `%i` - signed integer
* `%u` - unsigned integer
* `%x` - hexadecimal integer (lowercase)
* `%X` - hexadecimal integer (uppercase)
* `%%` - percent sign

## Usage
To use the ft_printf function in your own programs, you will need to include the `ft_printf.h` header file and link against the `libftprintf.a` library. You can then call the ft_printf function in the same way as the printf function from the C standard library.

For example, the following code will print "Hello, world!" to the console:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!", "world");
    return (0);
}
```

## Conclusion
The ft_printf project provides an excellent opportunity to practice your programming skills and learn about variadic functions and formatted output. By completing this project, you will have a deeper understanding of the inner workings of the printf function and gain valuable experience in writing efficient and reliable code. Good luck!
