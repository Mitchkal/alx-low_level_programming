0. 98 Battery st.- Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
1. Don't swap horses in crossing a stream
mandatory
Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);
julien@ubuntu:~/0x05$ cat 1-main.c
#include main.h
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf(a=%d, b=%dn, a, b);
    swap_int(&a, &b);
    printf(a=%d, b=%dn, a, b);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap  
2. Write a function that returns the length of a string.

Prototype: int _strlen(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

julien@ubuntu:~/0x05$ cat 2-main.c
#include main.h
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = My first strlen!;
    len = _strlen(str);
    printf(%dn, len);
    return (0);
}
3. Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

julien@ubuntu:~/0x05$ cat 3-main.c
#include main.h

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = I do not fear computers. I fear the lack of them - Isaac Asimov;
    _puts(str);
    return (0);
}

4. Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);
julien@ubuntu:~/0x05$ cat 4-main.c
#include main.h

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = I do not fear computers. I fear the lack of them - Isaac Asimov;
    print_rev(str);
    return (0);
}

5. Write a function that reverses a string.

Prototype: void rev_string(char *s);
julien@ubuntu:~/0x05$ cat 5-main.c
#include main.h
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = My School;

    printf(%sn, s);
    rev_string(s);
    printf(%sn, s);
    return (0);
}

6. Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);
julien@ubuntu:~/0x05$ cat 6-main.c
#include main.h

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = 0123456789;
    puts2(str);
    return (0);
}

7. Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
julien@ubuntu:~/0x05$ cat 7-main.c
#include main.h

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = 0123456789;
    puts_half(str);
    return (0);
}

8. Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
julien@ubuntu:~/0x05$ cat 8-main.c
#include main.h

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}

9. Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest
FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

julien@ubuntu:~/0x05$ cat 9-main.c
#include main.h
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, First, solve the problem. Then, write the coden);
    printf(%s, s1);
    printf(%s, ptr);
    return (0);
}

10. Write a function that convert a string to an integer.

Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

julien@ubuntu:~/0x05$ cat 100-main.c
#include main.h
#include <stdio.h>

/**
 * main - check the code
 *
Create a program that generates random valid passwords for the program 101-crackme.

You are allowed to use the standard library
You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
man srand, rand, time
gdb and objdump can help
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
julien@ubuntu:~/0x05$ ./101-crackme 
Tada! Congrats

1. Don't swap horses in crossing a stream
mandatory
Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);
julien@ubuntu:~/0x05$ cat 1-main.c
#include main.h
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf(a=%d, b=%dn, a, b);
    swap_int(&a, &b);
    printf(a=%d, b=%dn, a, b);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap  
2. Write a function that returns the length of a string.

Prototype: int _strlen(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

julien@ubuntu:~/0x05$ cat 2-main.c
#include main.h
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = My first strlen!;
    len = _strlen(str);
    printf(%dn, len);
    return (0);
}
3. Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

julien@ubuntu:~/0x05$ cat 3-main.c
#include main.h

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = I do not fear computers. I fear the lack of them - Isaac Asimov;
    _puts(str);
    return (0);
}

4. Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);
julien@ubuntu:~/0x05$ cat 4-main.c
#include main.h

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = I do not fear computers. I fear the lack of them - Isaac Asimov;
    print_rev(str);
    return (0);
}

5. Write a function that reverses a string.

Prototype: void rev_string(char *s);
julien@ubuntu:~/0x05$ cat 5-main.c
#include main.h
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = My School;

    printf(%sn, s);
    rev_string(s);
    printf(%sn, s);
    return (0);
}

6. Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);
julien@ubuntu:~/0x05$ cat 6-main.c
#include main.h

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = 0123456789;
    puts2(str);
    return (0);
}

7. Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
julien@ubuntu:~/0x05$ cat 7-main.c
#include main.h

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = 0123456789;
    puts_half(str);
    return (0);
}

8. Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
julien@ubuntu:~/0x05$ cat 8-main.c
#include main.h

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}

9. Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest
FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

julien@ubuntu:~/0x05$ cat 9-main.c
#include main.h
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, First, solve the problem. Then, write the coden);
    printf(%s, s1);
    printf(%s, ptr);
    return (0);
}

10. Write a function that convert a string to an integer.

Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

julien@ubuntu:~/0x05$ cat 100-main.c
#include main.h
#include <stdio.h>

/**
 * main - check the code
 *
Create a program that generates random valid passwords for the program 101-crackme.

You are allowed to use the standard library
You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
man srand, rand, time
gdb and objdump can help
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
julien@ubuntu:~/0x05$ ./101-crackme 
Tada! Congrats

