   # **42cursus' libft**

___Development repo for 42cursus' libft project___

For further information about 42cursus and its projects, 
please refer to **[42cursus](https://github.com/appinha/42cursus)** repo.


# `🗣️ About`
> *The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects.*

For detailed information, refer to the [subject](https://github.com/appinha/42cursus/tree/master/_PDFs) of this project.

`🚀 TLDR`: ***this project consists of coding basic C functions (see below), which are then compiled
into a library for use in other projects of the cursus.***

**Functions from `<ctype.h>` library**
 ```
        ft_isascii - test for ASCII character.
        ft_isalnum - alphanumeric character test.
        ft_isalpha - alphabetic character test.
        ft_islower * - lower-case character test.
        ft_isupper * - upper-case character test.
        ft_isdigit - decimal-digit character test.
        ft_isprint - printing character test (space character inclusive).
        ft_isspace * - white-space character test.
        ft_tolower - upper case to lower case letter conversion.
        ft_toupper - lower case to upper case letter conversion.
 ```
**Functions from `<stdlib.h>` library**
 ```
        ft_atoi - convert ASCII string to integer.
        ft_calloc - memory allocation.
 ```  
**Functions from `<strings.h>` library**
 ```
        ft_bzero - write zeroes to a byte string.
        ft_memset - write a byte to a byte string.
        ft_memchr - locate byte in byte string.
        ft_memcmp - compare byte string.
        ft_memmove - copy byte string.
        ft_memcpy - copy memory area.
        ft_memccpy - copy string until character found.
 ```
  
**Functions from `<string.h>` library**
 ```
        ft_strlen - find length of string.
        ft_strchr - locate character in string (first occurrence).
        ft_strrchr - locate character in string (last occurence).
        ft_strnstr - locate a substring in a string (size-bounded).
        ft_strncmp * - compare strings (size-bounded).
        ft_strnrcmp - reversely compare strings (size-bounded).
        ft_strcpy * - copy strings.
        ft_strdup - save a copy of a string (with malloc).
        ft_strcat * - concatenate strings (s2 into s1).
        ft_strlcpy - size-bounded string copying.
        ft_strlcat - size-bounded string concatenation.
```
**Functions from `<math.h>` library**
```
        ft_sqrt * - square root function.
```      
        
**Non-standard functions**
```
        
        ft_putchar * - output a character to stdout.
        ft_putchar_fd - output a character to given file.
        ft_putstr_fd - output string to given file.
        ft_putendl * - output string to stdout with newline.
        ft_putendl_fd - output string to given file with newline.
        ft_putnbr * - output integer to stdout.
        ft_putnbr_fd - output integer to given file.
        ft_itoa - convert integer to ASCII string.
        ft_substr - extract substring from string.
        ft_strtrim - trim beginning and end of string with the specified characters.
        ft_strjoin - concatenate two strings into a new string (with malloc).
        ft_split - split string, with specified character as delimiter, into an array of strings.
        ft_strmapi - create new string from modifying string with specified function.
```     
  
**Linked list functions**
```
        ft_lstnew - create new list.
        ft_lstsize - count elements of a list.
        ft_lstlast - find last element of list.
        ft_lstadd_back - add new element at end of list.
        ft_lstadd_front - add new element at beginning of list.
        ft_lstdelone - delete element from list.
        ft_lstclear - delete sequence of elements of list from a starting point.
        ft_lstiter - apply function to content of all list's elements.
        ft_lstmap - apply function to content of all list's elements into new list.
```
*Note: functions marked with * are bonus functions (not mandatory by the project's subject).*

# `🛠️ Usage`
###  *Requirements*
> The library is written in C language and thus needs the **`gcc`** compiler and some standard C libraries to run.

###  *Instructions*
+ Compiling the library
    + To compile the library, run: 
    ```
      $ cd path/to/libft && make
    ```
+ Using it in your code
    + To use the library functions in your code, simply include its header:

   ```c
   #include "libft.h"

   ```
   and, when compiling your code, add the required flags:

   ```bash
   -lft -L path/to/libft.a -I path/to/libft.h
   
   ```
