# ft_printf Project

## Description
The ft_printf is a project in the 42 school curriculum that aims to familiarize with variadic functions and the principles of formatted output. The project requires the implementation of a custom version of the printf function from the C standard library.

## Requirements
The implementation of the ft_printf function should support the following conversion types:

* `%c` - character
* `%s` - string
* `%p` - pointer address
* `%d` - signed integer
* `%i` - signed integer
* `%u` - unsigned integer
* `%x` - hexadecimal integer (lowercase)
* `%X` - hexadecimal integer (uppercase)
* `%%` - percent sign

_The buffer management of the original printf() is not implemented._

## Usage
To use the ft_printf function in your programs, you will need to include the `ft_printf.h` header file and link against the `libftprintf.a` library. You can then call the ft_printf function in the same way as the printf function from the C standard library.

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

The ft_printf project provides an excellent opportunity to practice programming skills and learn about variadic functions and formatted output. Completing this project will result in a deeper understanding of the inner workings of the printf function.