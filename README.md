## Project: Custom printf function for C - \_printf

**Description**: A custom printf function for the C programming language called \_printf, optimized to handle various inputs and optional arguments, following the standard library function printf.

**Prototype**: `int _printf(const char *format, ...);`

### Format of the Format String

The format string consists of directives, ordinary characters (not %), and conversion specifications. Each conversion specification begins with a `%` character and ends with a conversion specifier. It may include flags, width, precision, and length modifiers.

#### Flags
- `#`: Adds a leading zero for **o** conversions or "0x" / "0X" for **x** and **X** conversions.
- `0`: (Not implemented) Zero pads for numeric conversions.
- `-`: (Not implemented) Left-aligns the value.
- `' '`: Adds a space before positive numbers in signed conversions.
- `+`: Always includes a sign (+ or -) for signed conversions.

#### Field Width
- Specifies a minimum field width (decimal or *). 

#### Precision
- Optional precision defined by a period (.) followed by a decimal digit string or *.

#### Length Modifiers
- `l`: Converts to **long int** or **unsigned long int**.
- `h`: Converts to **short int** or **unsigned short int**.

### Conversion Specifiers
- `d, i`: Converts **int** to signed decimal with optional precision.
- `o, u, x, X`: Converts to unsigned octal, decimal, or hexadecimal with optional precision.
- `c`: Converts **int** to unsigned char.
- `s`: Expects a pointer type char * to an array of characters, with optional precision.
- `p`: Prints a void * pointer argument in hexadecimal.
- `%`: Writes a literal **%** character.
- `b`: Converts to an unsigned int in binary.
- `S`: Expects a pointer type char * to an array of characters, printing non-printable characters as \x<ASCII>.
- `r`: Expects a pointer type char * to an array of characters, printing in reverse order.
- `R`: Expects a pointer type char * to an array of characters, printing in ROT13.

**Authors**: Mohammed Rezki, Lanre Adeyanju.
