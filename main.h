#ifndef MAIN_H
#define MAIN_H
char *print_binary(unsigned int num, char *ptr, int i);
int write_binary(unsigned int num);
int _strlen(const char *str);
int _printf(const char *format, ...);
void write_out(const char *str);
char *insert_unsigned_digit(unsigned int num, char *str, int i);
char *insert_digit( int num, char *str, int i);
void write_digit(int num);
void write_unsigned_digit(unsigned int num);
int count_unsigned_digit(unsigned int num, int count);
int count_digit(int num);
void write_digit(int num);
int write_hex(unsigned int num, char ch);
int _str_len(char *str);
int write_oct(unsigned int num, int count);
char *insert_hex(unsigned int num, char *str, int i);
char *call_back(char *str, int i, unsigned int res);
#endif

