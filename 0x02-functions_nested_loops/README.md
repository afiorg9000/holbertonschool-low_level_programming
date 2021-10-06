***0x02. C - Functions, nested loops***

By the end of this project i was able to create a header file, use nested loops, functions, prototypes, and scope of variables in C. 

***Tasks***
0. _putchar.c

0-putchar.c:

**objective**
C program that prints _putchar, followed by a new line, and returns 0.

**process**
1# To start the task, i had to copy the source code, _putchar.c  provided by holberton school, and paste it into a new file that writes a 'c' value unsigned character to the standard output stream 'stdout'. The c function '_putchar' returns 1 for succesful function, on error, -1 is returned and errno is set appropriately.

2# For the program, i included the system header 'stdio.h' and my own header file "main.h".

3# i used int main(void) in the beginning of the program to define the function.

int- data type of the return value of the function.
main- name of the first function executed.
parameter- local variables which are assigned value of the arguments when the function is called.
void- the list of parameters that main is expecting from its caller. In most cases, its caller is the operating system.

4# i replaced printf for '_putchar' to write the characters and spelled '_putchar' including the new line. 

5# then at the end of the main function, i added 'return (0)'


