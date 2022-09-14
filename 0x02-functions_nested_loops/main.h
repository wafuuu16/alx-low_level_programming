#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */
int _islower(int c);
/**
 * _islower - prints if c is lowercase
 * @c: character to use
 * Return: 1 or 0
 */
int _isalpha(int c);
/**
 * _isalpha - prints if character is alphabet
 * @c: character to use 
 * Return 1 or 0
 */
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

#endif /* MAIN_H */
