#ifndef MAIN_H
#define MAIN_H

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
int _putchar(char c);
int find_sqrt(int num, int root);
int is_divisible(int num, int div);
int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);

#endif /*MAIN_H*/
