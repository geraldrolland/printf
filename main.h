#ifndef MAIN_H
#define MAIN_H
char *print_binary(int num, char *ptr, int i);
int write_binary(int num);
int _strlen(const char *str);
int _printf(const char *format, ...);
int _strlen(const char *str);
void write_out(const char *str);
char *insert_digit(int num, char *str, int i);
void write_digit(int num);
int count_digit(int num, int count);
void write_digit(int num);
int write_hex(unsigned int num, char ch);
char *insert_hex(int num, char *str, int i);
int _str_len(char *str);
int write_oct(unsigned int num);
char *insert_oct(unsigned int num, char *str, int i);
#endif
