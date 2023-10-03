#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
void _print_rev_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int _putchar(char c);
int _strlen_recursion(char *s);
int wildcmp(char *s1, char *s2);
int is_palindrome(char *s);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
#endif /* MAIN_H */
